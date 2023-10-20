#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of multiplying to number
 * @argc : number of command line argu
 * @argv : string of argument passed to main
 * Return : (0)s, (1)f
 */
int main(int arc, char *argv[])
{
	int arg1, arg2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	product = arg1 * arg2;

	printf("%d\n", product);

	return (0);
}
