#include "main.h"
/**
 * _printf - printf function
 * @format: format to print
 * Return: format
 */
int get_f(va_list args, char s)
{
list_f date[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_p},
		{'i', print_id},
		{'d', print_id},
		{'\0', '\0'}
	};
	int j = 0;

	while (j < 5)
	{
		if (date[j].type_p == s)
		{
			return (date[j].f(args));
		}
	j++;
	}
	_putchar(s);
	return (1);
}


int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] != '\0')
			{
				i++;
				len+=get_f(args, format[i]);
			}
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
