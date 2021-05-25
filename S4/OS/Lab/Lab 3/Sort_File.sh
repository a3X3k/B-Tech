#!/bin/bash

read -p "Enter the File Name : " file
echo "Highest : "$(grep [0-9] $file | sort -g | tail -1)
echo "Lowest : "$(grep [0-9] $file | sort -g | head -1)
