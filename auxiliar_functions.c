#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success c.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
