#include "main.h"

/**
 * get_func - check function
 * @format: check character
 * Return: pointer to the function
 */

int (*get_func(const char *format))(va_list)
{
	int i;

	funct_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pct},
		{NULL, NULL}
	};

	for (i = 0; p[i].t; i++)
	{
		if (*format == *(p[i].t))
		{
			return (p[i].f);
		}
	}
	return (NULL);
}
