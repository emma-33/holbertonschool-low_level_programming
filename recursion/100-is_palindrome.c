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
	int n = strlen(s);

	if (n == 0)
	{
		return (1);
	}
	return palindrome_check(s, 0, end - 1);
}
/**
 * palindrome_check - check if palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome else 0
 */

int palindrome_check(char *s, int start, int end)
{

	if (start == end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}
	if (start < end + 1)
	{
		return palindrome_check(s, start + 1, end - 1);
	}
	return (1);
	
}
