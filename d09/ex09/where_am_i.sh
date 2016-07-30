#!/bin/sh

str=$(ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d\  -f2)
if test -z "$str"
then
		echo "Je suis perdu!"
else
		echo $str | tr ' ' '\n'
fi