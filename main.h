#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);

/**
 * struct type_p - function pointer
 * @f: function
 * @type_p: type function
 */
typedef struct type_p
{
	char type_p;
	void (*f)(va_list args);
} list_f;
int _putchar(char c);
void print_c(va_list args);
void print_s(va_list args);
void print_p(va_list args);
#endif

