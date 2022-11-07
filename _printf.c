#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * @format: char pointer
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list string;
	const char *str;

	va_start(string, format);
	str = &format[0];
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	va_end(string);
	return (0);
}

