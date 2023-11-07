#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
