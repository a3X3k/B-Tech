#!/bin/bash
mkdir -p Test1/Test2/Test3
ls -l | cat > Test1/Test2/Test3/file1
cd Test1/Test2/Test3
cat file1 | tr -s " " | cut -d" " -f9
cat file1 | tr -s " " | cut -d" " -f9 | grep -i ^d
cat file1 | tr -s " " | tr ' ' '\n'
cd ~
