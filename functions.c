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
 * @ap: argument
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
 * @ap: arguments
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
 * @ap: arguments
 *
 * Return: character "%"
 */

int print_pct(va_list ap __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * print_int - function to print integers
 * @ap: argument printed
 *
 * Return: return result
 */

int print_int(va_list ap)
{
	int i, divisor = 1, result = 0;
	unsigned int number;

	i = va_arg(ap, int);

	if (i < 0)
	{
		result += _putchar('-');
		number = i * -1;
	}
	else
		number = i;

	while (number / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		result += _putchar(number / divisor + '0');
		number %= divisor;
		divisor /= 10;
	}
	return (result);
}
