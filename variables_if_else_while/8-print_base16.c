#include <stdio.h>
/**
 * main - prints all single digits in base 16
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int digits = '0';
	char alphabet = 'a';

	while (digits <= '9')
	{
		putchar(digits);
		digits++;
	}

	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
