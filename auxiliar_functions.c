#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_number - prtins a number using _putchar
 * @n: input number
 * Return:nothing
*/

int print_number(int n)
{
	long int num = 0, negativo = 0, cero = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{	n = n * -1;
			negativo = 1; 
		}
		if (n % 10 == 0)
		{	cero = 1;
			num = num * 10;
			num = num + 1;
			n = n / 10; 
		}
		while (n >= 10)
		{	num = num * 10;
			num = num + n % 10;
			n = n / 10; 
		}
		num = num * 10;
		num = num + n % 10;
		
		if (negativo == 1)
			_putchar('-');
		while (num >= 10)
		{	_putchar(num % 10 + '0');
			num = num / 10; 
		}
		if (cero == 1)
			_putchar('0');
		else
			_putchar(num + '0');
	}
	return (0);
}

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
