#ifndef VARIADIC_FONCTIONS_H
#define VARIADIC_FONCTIONS_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - parameters to check and print
 * @print: type
 * @f: fonction to send to
*/
typedef struct print
{
char *print;
void (*f)(va_list list);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_int(va_list list);
void print_char(va_list list);
void print_float(va_list list);
void print_str(va_list list);
void print_all(const char * const format, ...);

#endif
