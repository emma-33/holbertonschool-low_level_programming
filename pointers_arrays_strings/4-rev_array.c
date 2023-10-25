#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int temporary = 0;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temporary = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temporary;
	}
}
