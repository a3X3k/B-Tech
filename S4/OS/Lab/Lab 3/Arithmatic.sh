#!/bin/bash

read -p "Enter the first number : " num1
read -p "Enter the second number : " num2

echo "   M A I N - M E N U "
echo "1 - Addition"
echo "2 - Subtraction"
echo "3 - Multiplication"
echo "4 - Division"
echo "5 - Modulo"
echo "6 - Pre Increment"
echo "7 - Post Increment"
echo "8 - Pre Decrement"
echo "9 - Post Decrement"


echo -n "Please enter option [1 - 9]"
 
read num

case $num in
	1) 
		echo "Sum = $((num1 + num2))"
		;;
	2) 
		echo "Difference = $((num1 - num2))" 
		;;
	3) 
		echo "Product = $((num1 * num2))"
		;;
	4) 
		echo "Quotient = "$(echo "scale=2;$num1/$num2"| bc)
		;;
	5) 
		echo "Reminder = "$(( num1 % num2 ))
		;;
	6) 
		echo "Pre Incremented Number 1 = $((++num1))"
		echo "Pre Incremented Number 2 = $((++num2))"
		;;
	7) 
		echo "Post Incremented Number 1 = $((num1++))"
		echo "Post Incremented Number 2 = $((num2++))"
		;;
	8) 
		echo "Pre Decremented Number 1 = $((--num1))"
		echo "Pre Decremented Number 2 = $((--num2))"
		;;
	9) 
		echo "Post Decremented Number 1 = $((num1--))"
		echo "Post Decremented Number 2 = $((num2--))"
		;;
esac
