#include <stdio.h>
/**
 * main - prints all single digits from 0 to 9
 * each one followed by a , and a space
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int digits = '0';

	while (digits <= '9')
	{
		putchar(digits);
		putchar(',');
		putchar(' ');
		digits++;
	}
	putchar('\n');
	return (0);
}
