cat Day02/passwd | tr ' ' '\n' | sed -n "$MY_LINE1","$MY_LINE2"p | sed 'n; d' | cut -d ':' -f 1 | rev | tr '\n' ',' | sed -e 's/,$/./g' | sed -e 's/,/, /g'
