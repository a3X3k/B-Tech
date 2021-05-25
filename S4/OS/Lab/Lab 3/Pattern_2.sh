#!/bin/bash

space=4
star=1
for(( i = 1 ; i <= 5 ; i++))
do
	for((j=0;j<space;j++))
	do
		echo -n " "
	done
	
	space=$(( space-1 ))
	
	for((j=0;j<$star;j++))
	do
		echo -n "*"
	done
	star=$(( star+2 ))
	echo ""
done

