#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and
 * in upper case
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	char uppercase_alphabet = 'A';

	while (uppercase_alphabet <= 'Z')
	{
		putchar(uppercase_alphabet);
		uppercase_alphabet++;
	}
	putchar('\n');
	return (0);
}
