#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and
 * in upper case
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';
	char uppercase_alphabet = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (uppercase_alphabet <= 'Z')
	{
		putchar(uppercase_alphabet);
		uppercase_alphabet++;
	}
	putchar('\n');
	return (0);
}
