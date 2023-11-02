#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if s is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if string is palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;

	while (end > start)
	{
		if (s[start++] != s[end--])
		{
			return (0);
		}
	}
	return(1);
}
