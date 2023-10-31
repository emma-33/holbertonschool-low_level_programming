#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: int of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
