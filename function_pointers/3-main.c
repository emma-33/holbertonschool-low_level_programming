#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char ch;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	ch = *argv[2];
	if ((ch == '/' || ch == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (*f)(num1, num2);
	printf("%d\n", result);
	return (0);
}
