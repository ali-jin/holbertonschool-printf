#include "main.h"

/**
 * get_function - fonction
 * @format: chaine de caracteres
 * @argument : arguments specifiés "c" "s"...
 * ap : pointer struct
 * return le nombre de character a imprimer
 */
int (*get_function(const char *str, int n))(va_list)
{
	int i = 0;
	print_type argument[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pct},
		{"i", print_int}
		{"d", print_int}
		{NULL, NULL}
	};

	while (argument[i].parameter != NULL)
	{
		if (argument[i].parameter[0] == str[n])
			return (argument[i].f);
		i++;
	}
	return (NULL);
}

