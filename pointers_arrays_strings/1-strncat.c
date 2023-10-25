#include <stdio.h>
#include "main.h"

/**
 * *_strncat - concatenates two strings for n bytes from src
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes of str to concatenate
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
