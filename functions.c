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

	_putchar(c);/*prints recieved char*/
	return (1);/*return amount of char printed*/
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

	str = va_arg(args, char *);/*store string in a variable*/

	if (str)/*as long as string exists*/
	{
		for (i = 0; str[i]; i++)/*roams the recieved string*/
		{
			write(1, &str[i], 1);/*prints current position of str*/
			len++;/*adds to the number of char printed*/
		}
	}
	else
	{
		len += write(1, "(null)", 6);
	} /*in case str is null, prints "(null)" and adds char printed to len*/
	return (len);/*return number of char printed*/
}
/**
 * print_p - print percent
 * @args: arguments
 * Return: %
 */

int print_p(va_list args)
{
	(void)args;

	write(1, "%", 1);/*prints a percentage*/
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

	num = va_arg(args, int);/*stores number recieved in an integer*/
	n = num;/*stores num in another int for further manipulation*/

	if (n < 0)/*in case of negative value*/
	{
		_putchar('-');
		n = n * -1;
		num = -num;
		counter++;
	} /*prints "-" and extracts it from num*/
	if (n == 0)/*in case number is 0*/
	{
		counter += _putchar('0');/*print 0*/
		return (counter);/*return num of char printed*/
	}

	while (n > 0)/*stop when n reaches 0*/
	{
		n /= 10;
		div *= 10;
		counter++;
	} /*modifies the value of div so that it can turn num into a decimal*/
	div /= 10;

	for (; div >= 1; div /= 10)
	{
		print = ((num / div) % 10);
		_putchar(print + '0');
	} /*stores in a var the number furthest to the right of num and prints it*/

	return (counter);/*return number of char printed*/
}
