#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 *
 * @ac: argument count
 * @av: pointer to argument vector
 *
 * Return: pointer to a new string or null
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[len] != '\0')
		{
			len++;
		}
	
	str = malloc(ac * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	
}
