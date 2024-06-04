#!/bin/sh

a=0
b=0

while [ $a -lt 20 ] && [ $b -lt 10 ]
do
	echo $a $b
	a=`expr $a + 2`
	b=`expr $b + 1`
done
