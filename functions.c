#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * One error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - print character
 * @args: argument
 *
 * Return: character
 */

int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_string - prints string
 * @args: arguments
 *
 * Return: string
 */

int print_string(va_list ap)
{
	int i;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_pct - print character "%"
 * @args: arguments
 *
 * Return: character "%"
 */

int print_pct(va_list ap __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
