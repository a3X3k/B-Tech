#!/bin/bash

i=1
sum=1

read -p "Enter the Number : " num

num=$(( num+1 ))

while [ $i -lt $num ]
do
	sum=$(( sum*i ))
	i=$(( i+1 ))
done

echo "Factorial : "$sum


