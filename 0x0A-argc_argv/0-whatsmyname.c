#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * followed by a new line
 * @argc : numver of command-line arguments
 * @argv : string of arumenst passed to main func
 * Return : (0)
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
