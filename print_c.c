#include "main.h"

/**
 * print_c - A function that prints a charactar
 * @c: character to print
 * Return: Always 1 (Succes)
 */
int print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_write(character);
	return (1);
}
