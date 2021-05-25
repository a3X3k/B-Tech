#!/bin/bash

num1=0

read -p "Enter the Number : " num1

if [ $((num1 % 2)) == 0 ]
then
	echo "This is Even"
else
	echo "This is Odd"
fi

