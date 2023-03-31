#include "main.h"
/**
 * get_f - get correct function
 * @args: arguments
 * @s: character next to %
 * Return: correct function or print border case
 */
int get_f(va_list args, char s)
{
list_f data[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_p},
		{'i', print_id},
		{'d', print_id},
		{'\0', '\0'}
	}; /*list of structures that execute corresponding function*/
	int j = 0;

	while (j < 5 && s) /*roam through the list*/
	{
		if (data[j].type_p == s)
		{
			return (data[j].f(args));
		} /*if the necesary specificator is found, return it's function*/
	j++;
	}


	if (s != '\0')
	{
		_putchar('%');
		_putchar(s);
		return (2);
	} /*in case no specificator is recieved, treat % as a normal char*/
	else
	{
		return (_putchar('%'));
	} /*in case "\0" is recieved, print "%"*/
}

/**
 * _printf - printf function
 * @format: format to print
 * Return: format
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;/*define a list of arguments named args*/

	va_start(args, format);/*initialize previously defined list*/

	if (format == NULL)
		return (-1);/*in case nothing is recieved, return error*/

	while (format && format[i] != '\0')/*checks if format exist*/
	{
		if (format[i] == '%')/*looks for a format indicator*/
		{
			if (format[i + 1] == '\0')
				return (-1);/*in case no character after %, return error*/
			if (format[i + 1] != '\0')/*in case next charachter eists*/
			{
				i++;
				len += get_f(args, format[i]);
			} /*calls get_f and adds it's return value to len*/
		}
		else /*in case current position is not "%"*/
			len += _putchar(format[i]);/*prints the char and adds to len*/
		i++;
	}
	va_end(args);
	return (len);/*return number of char printed*/
}
