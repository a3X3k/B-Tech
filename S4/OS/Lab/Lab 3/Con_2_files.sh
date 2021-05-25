#!/bin/bash

read -p "Enter the File 1 : " num1
read -p "Enter the File 2 : " num2

cat $num1 > out
cat $num2 >> out

cat out
