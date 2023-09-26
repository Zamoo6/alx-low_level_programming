#include "main.h"

/**
 * set_string -sets the value of a pointer to a char
 * @s: pointer to pointer we need to set to
 * @to: string to set
 */
void set_string(char **, char *to)
{
	*s = to;
}
int main()
{
	char *str1 = "Hello";
	char *str2 = "world";

	printf("Vefore setting: %s\n", str1;
	set_string(&str1, str2);
	printf("After setting: %s\n", str1);

	return 0;
}
