cat /etc/passwd | grep -v "#" | sed "n;p" | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | cut -d ":" -f 1 | rev | tr "\n" "," | sed "s/,/, /g" | sed "s/, $/./"
