#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0, j = 0;

	list_f date [] = {
		{"%c", print_c},
		{"%s", print_s},
		{"%%", print_p},
		{NULL, NULL}
	};

	va_list args;
	va_start(args, format);

	for (len = 0; format[len]; len++)

	while (format && format[i] != '\0')
		
