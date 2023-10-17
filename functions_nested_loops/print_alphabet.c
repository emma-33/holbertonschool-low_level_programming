#include <unistd.h>
#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet with
 * a new line
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char alphabet = 'a';
	
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return;
}

