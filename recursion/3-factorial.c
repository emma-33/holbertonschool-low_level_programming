#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the number to search the factorial of
 *
 * Return: -1 if n < 0 or 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
