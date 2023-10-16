#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assign a random number to the variable n and
 * prints if n is positive,
 * equal to 0 or negative.
 * Return: Prints if n is positive, negative or equals to zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
/* if n is equal 0, then print the following */
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
/* if n is lower than 0, then print the following */
		printf("%d is negative\n", n);
	}
	else
	{
/* if n is greater than 0, then print the following */
		printf("%d is positive\n", n);
	}
	return (0);
}
