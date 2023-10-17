#include <stdio.h>
/**
 * main - prints the alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}

		else
		{
			putchar(alphabet);
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
