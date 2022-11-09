#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - type structure
 * @parameter: argument pointer
 * @f: pointer function to argument
 */

typedef struct print
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;

/* different prototypes */

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_pct(va_list ap);
int print_int(va_list ap);
int (*get_function(const char *format))(va_list);

#endif
