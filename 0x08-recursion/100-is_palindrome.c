#include "main.h"

/**
 * is_palindrome - returns ture if the given string is a palindrom
 * @s: sting to be check
 * Return: true if the given string is a palindome
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - Returns lenght of string>
 * @s: string to be measured
 *
 * Return: the length of the string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	
	return (len);
}

/**
 * check_palindrome - check if string is palindrome
 * @s: the string to be checked
 * @len: length of s
 * @index: the index of string to be checked
 *
 * Return: if the string is a palindrome - 1
 * 	   if the sting is not a palindrome - 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
