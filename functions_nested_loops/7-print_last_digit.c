#include "main.h"

/**
 * print_last_digit - Entry point, prints the last digit of * n
 * @n: int to print the last digit of
 * @last_digit:last digit of n
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n > 0)
	{
		last_digit = n % 10;
		_putchar('0' + last_digit);
	}

	else
	{
		n = -n;
		last_digit = n % 10;
		_putchar('0' + last_digit);
	}

	return (last_digit);

}
