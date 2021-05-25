#!/bin/bash

prime()
{
	for ((i=2; i<=$1; i++ ))
	do
		f=0
		if [ $i -lt 1 ]
		then
			continue
		fi
		
		for ((j=2; j<$i; j++ ))
		do
			if [ $(($i % $j)) == 0 ]
		 	then
		 		f=1
		 		break
		 	fi
		done
		
		if [ $f -eq 0 ]
		then
		 	echo -n -e "$i "
		fi
	done
	echo ""
}

prime $1

