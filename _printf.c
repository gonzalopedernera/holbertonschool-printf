#include "main.h"

/**
 * _printf - printf function
 * @format: format to print
 * Return: format
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;

	list_f date[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_p},
		{'\0', '\0'}
	};

	va_list args;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (date[j].type_p)
			{
				if (date[j].type_p == format[i + 1])
				{
					i++;
					(date[j].f)(args);
				}
			j++;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (0);
}
