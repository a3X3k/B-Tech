#!/bin/bash

len=0.0
bre=0.0
rad=0.0

read -p "Enter the Length of the Rectangle : " len
read -p "Enter the Breadth of the Rectangle : " bre
read -p "Enter the Radius of the Circle : " rad

echo "Area of Rectangle : "$((len*bre))
echo "Perimeter of Rectangle : "$((2*(len+bre)))

area=$(echo "scale=2;3.14 * $rad * $rad" | bc)
peri=$(echo "scale=2;2 * $rad * 3.14"|bc)

echo "Area of circle : " $area
echo "Perimeter of circle : " $peri


