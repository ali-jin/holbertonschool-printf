#include "main.h"

/**
 * get_function - fonction
 * @format: chaine de caracteres
 * @argument : arguments specifiés "c" "s"...
 * ap : pointer struct
 * return le nombre de character a imprimer
 */

int get_function(const char *format, print_type argument[], va_list ap)
{
	int i = 0;

	while (argument[i].parameter == NULL)
	{
		if (*(argument[i].parameter) == *format)
			argument[i].f(format);
		i++;
	}
	return (0);
}

