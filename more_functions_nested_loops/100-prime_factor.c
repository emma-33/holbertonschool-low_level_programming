#include <stdio.h>
#include "main.h"

/**
 * main - find and print the prime factors of n
 *
 * Return: 0
 */

int main(void)
{
	long int i;
	long int n = 612852475143;
	long int max;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);
	return (0);
}
