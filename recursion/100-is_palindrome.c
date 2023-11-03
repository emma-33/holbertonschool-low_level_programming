#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_palindrome - checks if s is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if string is palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = strlen(s) - 1;

	return (palindrome_check(s, len, i));
}
/**
 * palindrome_check - check if palindrome
 *
 * @str: string to check
 * @len: lenght of string
 * @i: iterator
 *
 * Return: 1 if palindrome else 0
 */

int palindrome_check(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
	{
		return (palindrome_check(str, len - 1, i + 1));
	}
	if (str[i] != str[len])
	{
		return (0);
	}
	return (1);
}
