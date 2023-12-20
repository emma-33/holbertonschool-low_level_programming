#include "main.h"

/**
* print_sign - checks and prints th sign of a number
* @n: number to check
*
* Return: 1 and prints + if n > 0, 0 and prints 0 if
* n=0, -1 and prints - if n < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
