#include "main.h"

/**
 * print_c - A function that prints a charactar
 * @c: character to print
 * Return: Always 1 (Succes)
 */
int print_char(va_list args)
{
	char character;
	
	character = va_arg(args, int);

	_putchar(character);
	return (1);
}
