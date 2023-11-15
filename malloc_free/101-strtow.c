#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer of an array of strings or
 * NULL if it fails
 */

char **strtow(char *str)
{
	char **array;
	int i;
	
	if (str == NULL || str == "")
	{
		return (NULL);
	}
	for (i = 0; str <= '\0'; i ++)
	{
		str ++;
	}

	array = malloc(size? * sizeof(*char));
	
		
}
