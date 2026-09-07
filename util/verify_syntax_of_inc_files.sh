#!/usr/bin/env bash

SED=`which gsed`

set -euo pipefail

# Katalog z plikami do sprawdzenia (domyślnie bieżący katalog)
TARGET_DIR="${1:-.}"

if [ ! -d "$TARGET_DIR" ]; then
    echo "Błąd: Katalog '$TARGET_DIR' nie istnieje."
    exit 1
fi

TEMP_DIR=$(mktemp -d)
trap 'rm -rf "$TEMP_DIR"' EXIT

ERRORS_FOUND=0

echo "🔍 Sprawdzanie plików konfiguracyjnych w: $TARGET_DIR"
echo "===================================================="

for file in "$TARGET_DIR"/*; do
    [ -f "$file" ] || continue

    filename=$(basename "$file")
    abs_path=$(realpath "$file")
    
    echo "  ${filename} ..."

    syntax_errors=()

    # 1. Statyczna weryfikacja linii (brak średnika na końcu dyrektywy)
    #line_num=0
    #while IFS= read -r line || [ -n "$line" ]; do
    #    ((line_num++))
        
        # Usunięcie komentarzy i skrajnych białych znaków
    #    trimmed=$(echo "$line" | ${SED} -e 's/#.*//' -e 's/^[[:space:]]*//' -e 's/[[:space:]]*$//')
        
        #if [[ -n "$trimmed" && ! "$trimmed" =~ \{[[:space:]]*$ && ! "$trimmed" =~ \}[[:space:]]*$ && ! "$trimmed" =~ \;[[:space:]]*$ ]]; then
        #    syntax_errors+=("Linia $line_num: Brak średnika na końcu -> '$trimmed'")
        #fi
    #done < "$abs_path"

    # 2. Weryfikacja przez `nginx -t` (jeśli nginx jest zainstalowany)
    nginx_valid=true
    nginx_output=""

    echo "nginx..."

    if command -v nginx &> /dev/null; then
        wrapper_file="$TEMP_DIR/test_nginx.conf"

        echo "  Wrapper file: ${wrapper_file} ..."

        # Test A: Kontekst 'server' (dla plików z dyrektywami typu 'location', 'rewrite', 'return')
        cat <<EOF > "$wrapper_file"
events {}
http {
    server {
        include "$abs_path";
    }
}
EOF
        if ! nginx_output=$(nginx -t -c "$wrapper_file" 2>&1); then
            # Test B: Kontekst 'http' (dla plików zawierających bloki 'server {}' lub 'upstream {}')
            cat <<EOF > "$wrapper_file"
events {}
http {
    include "$abs_path";
}
EOF
            if ! nginx_output=$(nginx -t -c "$wrapper_file" 2>&1); then
                nginx_valid=false
            fi
        fi
    fi

    echo "Summary: '${nginx_valid}'"

    cat ${wrapper_file}

    # 3. Podsumowanie wyników dla pliku
    if  [[ "x${nginx_valid}" == "xfalse" ]]; then
        ((ERRORS_FOUND++))
        echo "❌ [BLAD] $filename"
       
        if [[ "x$nginx_valid" == "xfalse" ]]; then
            echo "   ⛔ Nginx parser error:"
            echo "$nginx_output" | grep -v "syntax is ok" | ${SED} 's/^/      /'
        fi

        echo "nginx_output: ${nginx_output}"


        echo ""
    else
        echo "✅ [OK]   $filename"
    fi
done

echo "===================================================="
if [ "$ERRORS_FOUND" -eq 0 ]; then
    echo "🎉 Wszystkie pliki są poprawne!"
    exit 0
else
    echo "⚠️  Znaleziono błędy w $ERRORS_FOUND plikach."
    exit 1
fi
