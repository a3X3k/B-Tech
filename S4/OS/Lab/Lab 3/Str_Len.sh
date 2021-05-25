#!/bin/bash

read -p "Enter the Input 1 : " num1
read -p "Enter the Input 2 : " num2

echo "Input 1 = "$num1
echo "Input 2 = "$num2

num3="$num1$num2"

echo "Output = "$num3

size=${#num3}

echo "Length of the Output = "$size
