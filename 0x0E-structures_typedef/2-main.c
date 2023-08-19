#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Spider";
	my_dog.age = 4.5;
	my_dog.owner = "Daniel";
	print_dog(&my_dog);
	return (0);
}
