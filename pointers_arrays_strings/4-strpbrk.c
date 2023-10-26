#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s:
 * @accept:
 *
 * Return: pointer to the byte in s that matches one of the bytes 
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if(*s != *accept)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (*accept == '\0')
	{
		return (s);
	}
	return (NULL);

}
