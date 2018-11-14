IP=`ifconfig | grep -oE "\b([0-9]{1,3}\.){3}[0-9]{1,3}\b"`
if [ -z "$IP" ]; then echo "I am lost!"; else (echo "$IP") fi
