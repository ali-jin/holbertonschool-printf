#include "main.h"

/**
 * convert_binary - convert unsigned int in binary
 * @ap: print
 *
 * Return: 0
 */
int convert_binary(va_list ap)
{
	unsigned int n, max, i, sum;
	unsigned int bin[32];
	int len;

	n = va_arg(ap, unsigned int);
	/* (2 ^ 31), biggest positive number that fits in 32 bits*/
	max = 2147483648;
	bin[0] = n / max;
	for (i = 1; i < 32; i++)
	{
		max /= 2;
		bin[i] = (n / max) % 2;
	}
	for (i = 0, sum = 0, len = 0; i < 32; i++)
	{
		sum += bin[i];
		if (sum || i == 31)
		{
			_putchar('0' + bin[i]);
			len++;
		}
	}
	return (len);
}
