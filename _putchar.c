#include "main.h"
#include <unistd.h>
/**
 * _putchar - print char
 * @c: char
 * return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
