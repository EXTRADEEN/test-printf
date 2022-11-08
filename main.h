#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - definition of structure
 * @sc: The specifiers
 * @f: function
 */
typedef struct s_format
{
	char *sc;
	int (*f)(va_list arg);
}s_format;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);

#endif /* _MAIN_H */
