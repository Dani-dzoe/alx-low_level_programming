#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int i;

	while (s[c] = '\0');
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}

int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}

