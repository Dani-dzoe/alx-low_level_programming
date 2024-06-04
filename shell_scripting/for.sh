#!/bin/sh

a=0

for [ "$a" -lt 10 ]
do
	b=0
	for [ "$b" -lt 12 ]
	do
		echo -n $b
	done
	echo $a
	a=`expr $a + 1`
done
