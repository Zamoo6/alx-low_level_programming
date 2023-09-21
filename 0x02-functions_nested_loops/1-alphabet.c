#include <stdio.h>
#include <unistd.h>

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return write(1, &c, 1)
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

int main(void)
{
	print_alphabet();
	return 0;
}
