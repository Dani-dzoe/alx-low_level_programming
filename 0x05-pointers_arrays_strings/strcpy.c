#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[98];
	char *str;

	str = _strcpy(s, "I have done it. Copying a string is great\n");
	printf("%s\n", s);
	printf("%s\n", str);

	return (0);
}

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src+ len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
