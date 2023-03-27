#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
typedef struct type_p
{
	char *type_p;
	void (*f)(va_list args);
}list_f;

void print_c (va_list args);
void print_s (va_list args);
void print_p (va_list args);
#endif

