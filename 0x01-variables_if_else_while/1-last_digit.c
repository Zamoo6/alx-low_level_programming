#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;

	if (j > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	}
	else if (j == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, j);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, j);
	}
	/* your code goes there */
	return (0);
}
