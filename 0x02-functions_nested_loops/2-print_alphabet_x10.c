#include "main.h"
/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	int la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
		{
			_putchar(la);
		}
		_putchar('\n');
	}
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
