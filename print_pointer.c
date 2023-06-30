#include "main.h"

/**
 * print_pointer - output hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int q;
	int w;
	int d;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (d = 0; s[d] != '\0'; d++)
		{
			_putchar(s[d]);
		}
		return (d);
	}

	q = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	w = printf_hex_aux(q);
	return (w + 2);
}
