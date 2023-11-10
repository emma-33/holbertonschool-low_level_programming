#include <stdio.h>
#include <stdlib.h>
#include "main.h"

if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit (98);
	}
/**
 * _isdigit - checks for a digit
 *
 * @s: char to check
 *
 * Return: 0 if s is a digit else exit 98
 */ 
int _isdigit(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' || s[i] <= '9')
		{
			return (0);
		}
		i++;
	}
	printf("Error\n");
	exit (98);
}

/**
* _strlen - returns the lenght of a string
*
* @s: string
*
* Return: length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
