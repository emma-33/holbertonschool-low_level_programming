#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to reverse
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
