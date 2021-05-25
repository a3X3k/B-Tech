#!/bin/bash

gcd()
{
	gcd=0
	for((i=1;i<=$1 && i<=$2;i++))
	do
		if [ $(($1 % i)) == 0 ]
		then
			if [ $(($2 % i)) == 0 ]
			then
				gcd=$i
			fi
		fi
	done
	echo "GCD = $gcd"			
}


gcd $1 $2
