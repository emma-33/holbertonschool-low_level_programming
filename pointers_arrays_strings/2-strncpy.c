#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @src: string to copy from
 * @dest: destination string
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
