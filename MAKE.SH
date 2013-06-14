#!/bin/bash

echo 'Usage: ./MAKE.SH [check]
	check - run valgrind'
gcc tiny.c -o bintiny
./bintiny  > tmp.txt
# echo $?
if [ "$1" = 'check' ]; then
	which valgrind || echo sudo apt-get install valgrind
	valgrind ./bintiny
fi
