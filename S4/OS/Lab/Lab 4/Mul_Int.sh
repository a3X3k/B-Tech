#!/bin/bash

table()
{
	for((i=1;i<=$1;i++))
	do
		echo "$i * $1 = $((i*$1))"
	done
}

read -p "Enter the Number : " num
table $num
