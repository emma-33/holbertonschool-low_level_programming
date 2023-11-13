#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array
 *
 * @array: array to work with
 * @size: size of array
 * @action: pointer to the fonction you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
