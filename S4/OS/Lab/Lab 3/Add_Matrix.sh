#!/bin/bash

read -p "Enter the No of Rows : " row
read -p "Enter the No of Columns : " col

echo "Matrix 1"

for((i=1;i<=$row;i++))
do
	for((j=1;j<=$col;j++))
	do
		read -p "Enter the Element : " arr1[$i$j]
	done
done

echo "Matrix 2"

for((i=1;i<=$row;i++))
do
	for((j=1;j<=$col;j++))
	do
		read -p "Enter the Element : " arr2[$i$j]
	done
done

echo "Matrix 1"

for((i=1;i<=$row;i++))
do
	for((j=1;j<=$col;j++))
	do
		echo -n ${arr1[$i$j]}
		echo -n " "
	done
	echo ""
done

echo "Matrix 2"

for((i=1;i<=$row;i++))
do
	for((j=1;j<=$col;j++))
	do
		echo -n ${arr2[$i$j]}
		echo -n " "
	done
	echo ""
done

for((i=1;i<=$row;i++))
do
	for((j=1;j<=$col;j++))
	do
		arr3[$i$j]=`expr ${arr1[$i$j]} + ${arr2[$i$j]}`
	done
done

echo "Addition of Matrices is : "

for((i=1;i<=$row;i++))
do
	for((j=1;j<=$col;j++))
	do
		echo -n ${arr3[$i$j]}
		echo -n " "
	done
	echo ""
done
