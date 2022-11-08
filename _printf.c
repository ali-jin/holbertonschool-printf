#include "main.h"

/**
 * _printf - function printf
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	char *str = format[0];
	va_list ap;

	print_type argument[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pct},
		{NULL, NULL}
	};

	va_start(ap, format);
	
	while (*str != '\0')
	{
		if (*str == '%')
		{
			get_function(format, argument, ap);
			str++;
		}
		_putchar(*str);
		str++;
	}

	va_end(ap);

	return (0);
}
