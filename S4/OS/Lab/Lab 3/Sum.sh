#!/bin/bash

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
