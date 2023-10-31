#include <stdio.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @c: character to find
 * @s: string to locate the character
 *
 * Return: pointer of c or null if c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
