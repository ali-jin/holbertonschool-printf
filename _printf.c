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

	for (i = 0; argument[i].parameter; i++)
	{
		if (*format == *(argument[i].parameter))
		{
			return (argument[i].parameter);
		}
	}
	return (NULL);
}
