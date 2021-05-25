#!/bin/bash

echo ""
echo "############### Currently logged user ###############"
whoami

echo ""
echo "############### Current shell ###############"
echo "$SHELL"

echo ""
echo "############### Home Directory ###############"
cd ~ | ls

echo ""
echo "############### Operating system type ###############"
egrep '^(VERSION|NAME)=' /etc/os-release

echo ""
echo "############### Current path setting ###############"
echo $PATH

echo ""
echo "############### Current working directory ###############"
pwd

echo ""
echo "############### All available shells ###############"
cat /etc/shells

