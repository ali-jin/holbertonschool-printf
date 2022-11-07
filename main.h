#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct func_type - type structure
 * @t: argument pointer
 * @f: pointer function to argument
 */

typedef struct func_type
{
	char *t;
	int(*f)(va_list);
}
funct_t;

/* different prototypes */

int (*get_function(const char *format))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_pct(va_list);

#endif
