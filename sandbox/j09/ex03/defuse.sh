touch -A '-000001' bomb.txt && stat -s bomb.txt | grep -o -E 'st_atime.{0,11}' | cut -c10-
