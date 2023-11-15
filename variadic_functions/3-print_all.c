#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - prints numbers
 * @list: type
 * Return: nothing
*/
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_char - prints characters
 * @list: type
 * Return: nothing
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_float - prints floats
 * @list: type
 * Return: nothing
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_str - prints strings
 * @list: type
 * Return: nothing
*/
void print_str(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	print_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	int i = 0, j = 0;
	char *sep = "";
	va_list list;

	va_start(list, format);

	while (format && format[i])
	{
		while (types[j].print)
		{
			if (format[i] == *types[j].print)
			{
				printf("%s", sep);
				types[j].f(list);
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
