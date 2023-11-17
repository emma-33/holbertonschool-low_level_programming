#include "variadic_functions.h"

/**
 * print_int - prints numbers
 * @ap: type
 * Return: nothing
*/
void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_char - prints characters
 * @ap: type
 * Return: nothing
*/
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - prints floats
 * @ap: type
 * Return: nothing
*/
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_str - prints strings
 * @ap: type
 * Return: nothing
*/
void print_str(va_list ap)
{
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)

		str = "(nil)";

	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *sep = "";
	va_list ap;

	choice list[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		while (list[j].letter)
		{
			if (format[i] == list[j].letter)
			{
				printf("%s", sep);
				list[j].print(ap);
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(ap);
}
