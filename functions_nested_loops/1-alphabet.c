#include "main.h"

/**
 * print_alphabet - Entry point, prints the
 * alphabet with a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;

	}
	_putchar('\n');

}
