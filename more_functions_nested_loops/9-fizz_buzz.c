#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * Return: 0
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf(" Fizz");
			n++;
		}

		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf(" Buzz");
			n++;
		}

		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
			n++;
		}
		else if (n == 1)
		{
			printf("%d", n);
			n++;
		}

		else
		{
			printf(" %d", n);
			n++;
		}
	}
	printf("\n");

	return (0);
}
