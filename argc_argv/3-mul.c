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
	int mul = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);

	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
