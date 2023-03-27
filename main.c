#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0, j = 0;

	list_f date [] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
		{NULL, NULL}
	};

	va_list args;
	va_start(args, format);

	for (len = 0; format[len]; len++)
	{
		j = 0;
		while(date[j].args)
		{
			switch(format[len] == '%')
			{
				case(format[len + 1] == date[j].args)
				{
					(date[j].f)(args);
				}
			}
			j++;
		}
	}

		if (format[len] == date[j].args[0])
		if (format && format[i] != '\0')
		
