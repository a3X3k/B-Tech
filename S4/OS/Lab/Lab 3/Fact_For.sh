#!/bin/bash

sum=1

read -p "Enter the Number : " num

for ((i=1; i<=num; i++ ))

do
	sum=$(( sum*i ))
done

echo "Factorial : "$sum
