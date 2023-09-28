#include "main.h"
/**
 * fuction to print string in revers.
 * @s: string parameter
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
