#include "main.h"

/**
 * print_char - prints character
 * @val: character to print
 * Return: 1
 */

int print_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
