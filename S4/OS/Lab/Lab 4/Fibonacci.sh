#!/bin/bash

fibonacci()
{
	s1=0
	s2=1
	s3=0
	echo -n -e "Fibonnaci Series : "
	for (( i=1;i <= $1;i++))
	do
		echo -n -e "$s1 "
		s3=$((s1+s2))
		s1=$s2
		s2=$s3
	done
	echo ""
}


fibonacci $1
