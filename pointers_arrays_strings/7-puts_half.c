#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints second half of a string followed by a new line
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i;
	int n;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++) /*get the length of str*/
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
		_putchar('\n');
}
