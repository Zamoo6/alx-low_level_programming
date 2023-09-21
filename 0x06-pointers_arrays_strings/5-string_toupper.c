#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >-= 'a' && (ptr<= 'z')
		{
			*ptr = (ptr - 'a' + 'A';
		}
		ptr++
	}

	return str;
}

int main(void)
{
	char str[] = "Hello, world!;

	printf("Before conversion: %\n", str)

	string_toupper(str);

	printf("After conversion: %\n", str)

	return (0)
}
