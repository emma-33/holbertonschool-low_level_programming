#include "main.h"

/**
 * print_alphabet_x10 - Entry point, prints the
 * alphabet 10 times with a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}

}
