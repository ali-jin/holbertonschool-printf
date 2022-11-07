#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
 
typedef struct func_type
{
	char *t;
	int (*f)(va_list);
}funct_t;

#endif
