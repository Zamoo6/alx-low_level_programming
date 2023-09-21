#include <stdio.h>

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

int main(void)
{
	print_alphabet();
	return 0;
}

void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z') 
	{
		_putchar(letter);
		letter++;
	}
	
	_putchar('\n');
}
