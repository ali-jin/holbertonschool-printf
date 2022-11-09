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
	int len = 0;
	int (*func)(va_list ap);
	va_list ap;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
		if (format[i] != '\0')
		{
			func = get_function(format + i);
			i++;
		}
		if (func == NULL)
		{
			_putchar('%'),
			_putchar(format[i - 1]),
			len += 2;
		}
		else
			len += func(ap);
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(ap);
	return (len);
}
