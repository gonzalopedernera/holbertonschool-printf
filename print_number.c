#include "main.h"
#include <stdio.h>
/**
 * print_number - prtins a number using _putchar
 * @n: input number
 * Return:nothing
*/

int print_number(int n)
{
	int num = 0;
	int negativo = 0;
	int cero = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{	n = n * -1;
			negativo = 1; }
		if (n % 10 == 0)
		{	cero = 1;
			num = num * 10;
			num = num + 1;
			n = n / 10; }
		while (n >= 10)
		{	num = num * 10;
			num = num + n % 10;
			n = n / 10; }
		num = num * 10;
		num = num + n % 10;
		if (negativo == 1)
			_putchar('-');
		while (num >= 10)
		{	_putchar(num % 10 + '0');
			num = num / 10; }
		if (cero == 1)
			_putchar('0');
		else
			_putchar(num + '0');
	}
	return (0);
}
