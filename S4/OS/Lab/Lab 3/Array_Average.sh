#!/bin/bash

declare -a arr
read -p "Enter the number of Elements in the Array : "  count

sum=0
for(( i = 0 ; i < $count ; i++))
do
	read -p "Enter the Element : "  x
	arr[$i]="$x"
	sum=$((sum+x))
	
done
echo -e "Array = ${arr[@]}"

ave=$(echo "scale=2;($sum)/$count"| bc)

echo "Average = "$ave
