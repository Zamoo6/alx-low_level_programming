#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 *
 * Description: If the number of characters in the string is odd, the function
 * prints the last n characters of the string, where n = (length_of_the_string - 1) / 2.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	
	for (; start_index < length; start_index++)
	{
		putchar(str[start_index]);
	}
	
	putchar('\n');
}
