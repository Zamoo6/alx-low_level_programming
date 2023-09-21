#include <stdio.h>

/**
 * _stract - concatenates tow strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	// find the end of the destination string
	while (*ptr != '\0'
		{
		ptr++;
		}

	// append the source string to the desination string
	while (*src != '\0'
		{
		*ptr = *src;
		ptr++;
		src++;
		}

	// add the terminating null tyoe
	*ptr = '\0';

	return dest;
}

int main(void)
{
	char str1[50] = "Hell0, ";
	char str2[] = "world!";

	printf("Before concatenation: %s\n", str1);

	_strcat(str1, str2);

	printf("after concatenation: %s\n", str1);

	return 0;
}
