#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is
 * a duplicate of the string str
 *
 * @str: string to duplicate
 *
 * Return: pointer to duplicate string or null if 
 * insufficient memory was available
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
	     i++;
	}
	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}
	
	while (str[j] != '\0')
	{
		str2[j] = str[j];
		j++;
	}
	str2[j + 1] = 0;
	return (str2);
	
}
