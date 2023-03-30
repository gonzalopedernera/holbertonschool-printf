#include "main.h"
/**
 * print_c - print char
 * @args: arguments
 * Return: char
 */
int print_c(va_list args)
{
	char c;

	c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_s - print string
 * @args: arguments
 * Return: s
 */

int print_s(va_list args)
{
	int i, len = 0;
	char *str;

	str = va_arg(args, char *);

	if (str)
	{
		for (i = 0; str[i]; i++)
		{
			write(1, &str[i], 1);
			len++;
		}
	}
	else
	{
		len += write(1, "(null)", 6);
	}
	return (len);
}
/**
 * print_p - print percent
 * @args: arguments
 * Return: %
 */

int print_p(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}

/**
 * print_id - print int
 * @args: arguments
 * Return: int
 */
int print_id(va_list args)
{
	long int n = 0, num = 0, counter = 0, div = 1, print = 0;

	num = va_arg(args, int);
	n = num;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		num = -num;
		counter++;
	}
	if (n == 0)
	{
		counter += _putchar('0');
		return (counter);
	}

	while (n > 0)
	{
		n /= 10;
		div *= 10;
		counter++;
	}
	div /= 10;

	for (; div >= 1; div /= 10)
	{
		print = ((num / div) % 10);
		_putchar(print + '0');
	}

	return (counter);
}
