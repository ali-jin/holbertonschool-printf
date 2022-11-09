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
	va_list ap;

	va_start(ap, format);
	
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			get_function(format, i + 1)(ap);
			i += 1;
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}

	va_end(ap);

	return (0);
}
