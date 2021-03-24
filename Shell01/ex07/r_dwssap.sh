cat /etc/passwd | sed '/^#/d' | sed -n '2,$p' | awk -F ":" '{ print $1 }' | rev | sort -fnr | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,$/./' | sed 's/,/, /g' | tr -d '\n'
