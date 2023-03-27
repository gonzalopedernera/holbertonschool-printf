#include "main.h""
/**
 * print_c - print char
 * args: arguments
 * Return: char
 */

void print_c(va_list args)
{
	write(1, format, 1);
}

/**
 * print_s - print string
 * args: arguments
 * Return: s
 */

void print_s(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);

	if (str)
	{
		for (i = 0; str[i]; i++)
		{
			write(1, format[i], 1);
		}
	}
}
/**
 * print_p - print percent
 * args: arguments
 * Return: %
 */

void print_p(va_list args)
{
	write(1, '%', 1);
}
