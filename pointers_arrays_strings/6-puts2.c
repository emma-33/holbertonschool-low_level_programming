#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 -  prints every other character of a string
 *
 * @str: string to print from
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
}
