#include "main.h"

/**
 * _printf - function printf
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i;

	print_type argument[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pct},
		{NULL, NULL}
	};

	va_list ap;
	int i = 0;

	va_start(ap, format);
	i = get_function(format, argument, ap);

	va_end(ap);

	return (i);
}
