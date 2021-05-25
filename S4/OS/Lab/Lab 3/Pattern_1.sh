#!/bin/bash

for(( i = 5 ; i > 0 ; i--))
do
	for(( j = 0 ; j < $i ; j++))
	do
		echo -n "*"
	done
	echo ""
	
done

