#!/bin/sh

NAME="Daniel"

echo $NAME

echo "File name: $0"
echo "First parameter: $1"
echo "Second Parameter: $2"
echo "Third parameter: $3"
echo "Quoted values: $*"
echo "Quoted values: $@"
echo "No of parameters: $#"

for TOKEN in $*
do
	echo $TOKEN
done
