#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0
 *
 * @n: int to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_num(n, 2));
}

/**
 * prime_num - check if a is a prime number
 *
 * @a: same num as n
 * @b: iterator
 *
 * Return: 1 if a is prime,otherwise 0
 */

int prime_num(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return (prime_num(a, b + 1));
	}
}
