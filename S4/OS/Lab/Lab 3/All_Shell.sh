#!/bin/bash

echo "Name and Details : "

read -p "Enter Your Name : "  varname1

read -p "Enter the Program Name : " varname2

read -p "Enter the Enrolment Number : " varname3

echo Hello $varname1
echo Program Name :  $varname2
echo Enrolment Number : $varname3

###############################################

num1=0
num2=0
num3=0
num4=0
ave=0

read -p "Enter the first number : " num1
read -p "Enter the second number : " num2
read -p "Enter the third number : " num3
read -p "Enter the fourth number : " num4

echo "Sum = $((num1 + num2 + num3 + num4))"
echo "Product = $((num1 * num2 * num3 * num4))"

ave=$(echo "scale=2;($num1 + $num2 + $num3 + $num4)/4"| bc)

echo "Average = "$ave

###############################################

echo "Odd or Even : "

num1=0

read -p "Enter the Number : " num1

if [ $((num1 % 2)) == 0 ]
then
	echo "This is Even"
else
	echo "This is Odd"
fi

###############################################

echo "Swap Inputs : "

read -p "Enter the Input 1 : " num1
read -p "Enter the Input 2 : " num2

echo "Before Swapping : "
echo "Input 1 = "$num1
echo "Input 2 = "$num2

temp=$num1

num1=$num2

num2=$temp

echo "After Swapping : "
echo "Input 1 = "$num1
echo "Input 2 = "$num2

################################################

echo "Find the Line with Numbers in it : "

read -p "Enter the File Name : " file
grep [0-9] $file

#################################################

echo "Concatenate Two Inputs And find its Length : "

read -p "Enter the Input 1 : " num1
read -p "Enter the Input 2 : " num2

echo "Input 1 = "$num1
echo "Input 2 = "$num2

num3="$num1$num2"

echo "Output = "$num3

size=${#num3}

echo "Length of the Output = "$size

#################################################

echo "Concatenate File Contents : "

read -p "Enter the File 1 : " num1
read -p "Enter the File 2 : " num2

cat $num1 > out
cat $num2 >> out

cat out

#################################################

echo "Sleep for 5 Seconds and Display the Time : "

sleep 5

date +"%r"
