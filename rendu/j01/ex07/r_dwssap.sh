cat /etc/passwd | grep -v '#' | sed -n 'n;p' | rev | sed 's@.*:@@' | sort -r | sed -n -e ''"$FT_LINE1"','"$FT_LINE2"'p' | sed '1s/^//;$!s/$/,/;$s/$//'  | tr '\n' ' ' | sed 's/ $/./' | tr -d '\n'
