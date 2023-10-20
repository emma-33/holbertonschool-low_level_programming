#include <stdio.h>
#include "main.h"

/**
 * prime_factors - find and print the prime factors of n
 *
 * @n: long int to test
 * @i: int to divided by
 */

int main(void)
{
	int i;
	long int n = 612852475143;
	
	while (n%2 == 0)
	{
		printf("%d ", 2);
		n = n/2;
	}

	for (i = 3; i * i <= n; i = i+2)
	{
		while (n%i == 0)
		{
			printf("%d ", i);
			n = n/i;
		}
	}
	if (n > 2)
	{
		printf("%ld ", n);
	}
	printf("\n");
	return (0);

}
	
