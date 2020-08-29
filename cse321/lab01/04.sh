read -p "Enter a number: " num
sum=0
while [ $num -gt 0 ]; do
	sum=$(( $sum + $(( $num % 10 )) ))
	num=$((  $num / 10 ))
done
printf "sum of all the digits: %d\n" $sum
