#include "main.h"

/**
 * binary_to_uint - prog converts a binary num to an unsigned int.
 * @b: binary pointer.
 *
 * Return: unsigned int if true or 0 if false.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uni;
	int len, base_two;

	if (!b)
		return (0);

	uni = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			uni += base_two;
		}
	}

	return (uni);
} /**zamoo6*/
