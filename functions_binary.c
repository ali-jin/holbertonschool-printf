#include "main.h"

int convert_binary(va_list ap)
{
	unsigned int len, reste = 0, place = 1;
	unsigned int bin = 0;
	int num = va_arg(ap, unsigned int);

	while (num)
	{
		reste = num % 2;
		num = num / 2;
		bin = bin + (reste * place);
		place = place * 10;
		len++;
	}
	print_binary(bin);
	return (0);
}


void print_binary(unsigned int i)
{
	if (i / 10 != 0)
	{
		print_binary(i / 10);
		if ( i > 0 )
		{
			_putchar(i % 10 + '0');
		}
		else
		{
			_putchar(-i % 10 + '0');
		}
	}
	else if((i / 10 == 0) && (i % 10 != 0) && (i > 0))
	{
		_putchar(i % 10 + '0');
	}
	else if((i / 10 == 0) && (i % 10 != 0) && (i <= 0))
	{
		_putchar('-');
		_putchar(-i % 10 + '0');
	}
}
