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
	int (*p)(int);

	p = cmp;

	if (size <= 0)
	{
		return (-1);
	}

	if (!array || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (p(array[i]) && array[i] != 0)
		{
			return (i);
		}
		if (i == size - 1)
		{
			return (-1);
		}
	}
return (i);
}
