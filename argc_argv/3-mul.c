#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two arguments
 *
 * @argc: int of arguments
 * @argv: array of arguments
 *
 * Return: 1 if the program does'nt receive 2 arguments, otherwise 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
