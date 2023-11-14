#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to check
 * @size: number of elements in the array
 * @cmp: pointer to function used to compare value
 *
 * Return: index of the first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
			{
				return (i);
			}
		}
	}
	return (-1);
}
