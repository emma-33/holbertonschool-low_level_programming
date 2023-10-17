#include <stdio.h>
/**
 * main - prints all single digits from 0 to 10
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int digits = 0;

	while (digits <= 9)
	{
		printf("%d", digits);
		digits++;
	}
	printf("\n");
	return (0);
}
