#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add argu from the cmd
 * @argc : number fo argu
 * @argv : the argu
 * Return : (0)s, (1)f
 */
int main(int argc, char *argv[])
{
	int sum, num, digit;

	sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit] != '\0'; digit++)
		{
			if (!isdigit(argv[num][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
