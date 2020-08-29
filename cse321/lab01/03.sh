#!/bin/bash
sum (){
	printf "The result is: %d\n" $(( $1 + $2 ))
}
sub (){
    printf "The result is: %d\n" $(( $1 - $2 ))
}
mul (){
    printf "The result is: %d\n" $(( $1 "*" $2 ))
}
div (){
    printf "The result is: %d\n" $(( $1 / $2 ))
}
read -p "Which operation would you like to do?[+, -, x, /] " str
if [[ "$str" == "+" ]]; then
	read -p "Operand 01: " a
	read -p "Operand 02: " b
	sum $a $b

elif [[ "$str" == "-" ]]; then
	read -p "Operand 01: " a
	read -p "Operand 02: " b
	sub $a $b
elif [[ ( "$str" == "x" )  || ( "$str" == "*" ) ]]; then
	read -p "Operand 01: " a
	read -p "Operand 02: " b
	mul $a $b
else
	read -p "Operand 01: " a
	read -p "Operand 02: " b
	if [[ $b -eq 0 ]]; then
		echo "Undefine"
	else
		div $a $b
	fi
fi
