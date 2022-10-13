#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * main - header file for all prototypes
 * struct printer - a new struct type defining printer
 * @symobl: a symbol representing a data type
 * @print: a function pointer =
 * int prototype (int)
 * void prototype (void)
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
