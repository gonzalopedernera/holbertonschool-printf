#include "main.h"
/**
 * print_c - print char
 * @args: arguments
 * Return: char
 */

void print_c(va_list args)
{
	char c;

	c = va_arg(args, int);

	_putchar(c);
}

/**
 * print_s - print string
 * @args: arguments
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
			write(1, &str[i], 1);
		}
	}
}
/**
 * print_p - print percent
 * @args: arguments
 * Return: %
 */

void print_p(va_list args)
{
	(void)args;

	write(1, "%", 1);
}
