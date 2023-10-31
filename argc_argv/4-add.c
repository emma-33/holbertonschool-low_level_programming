#include <stdlib.h>
#include <stdio.h>

/**
 * main - add two numbers
 *
 * @argc: int of arguments
 * @argv: array of arguments
 *
 * Return: 1 if the number contains a non digit symbol,
 * otherwise 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
}
