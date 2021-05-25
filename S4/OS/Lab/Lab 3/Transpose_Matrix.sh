#!/bin/bash

read -p "Enter the No of Rows : " row
read -p "Enter the No of Columns : " col

echo "Matrix 1"

for((i=1;i<=$row;i++))
do
	for((j=1;j<=$col;j++))
	do
		read -p "Enter the Element : " arr[$i$j]
	done
done

echo "Original Matrix :"

for((i=1;i<=$row;i++))
do
	for((j=1;j<=$col;j++))
	do
		trans[$j$i]=$((arr[$i$j]))
		echo -n ${arr[$i$j]}
		echo -n " "
	done
	echo ""
done

echo "Transpose Matrix :"

for((i=1;i<=$row;i++))
do
	for((j=1;j<=$col;j++))
	do
		echo -n ${trans[$i$j]}
		echo -n " "
	done
	echo ""
done

