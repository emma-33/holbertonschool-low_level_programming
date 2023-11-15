#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of int passed in the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(num, int));

		else if (separator && i == 0)
			printf("%d", va_arg(num, int));

		else
			printf("%s%d", separator, va_arg(num, int));
	}
	va_end(num);
	printf("\n");
}
