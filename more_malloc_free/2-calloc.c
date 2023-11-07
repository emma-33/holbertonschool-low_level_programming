#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of elements in the array
 * @size: size in byte of each elements
 *
 * Return: pointer to allocate memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
