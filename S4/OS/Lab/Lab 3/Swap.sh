#!/bin/bash

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
