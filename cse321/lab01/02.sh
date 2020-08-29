#!/bin/bash
read -p "Enter a number: " num
fib=2
a=1
b=1
if [ $num > 0 ]; then
	printf "1 1"
fi
while [[ $num -ge $fib ]]; do
	printf " %d" $fib
	a=$b
	b=$fib
	fib=$(( $a + $b ))
done
printf "\n"
