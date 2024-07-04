#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}

int main(void)
{
	char s[25] = "My School is Awesome!!";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
