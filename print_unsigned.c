#include "main.h"

/**
 * print_unsigned - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
 */

int print_unsigned(va_list args)
{
	unsigned int u = va_arg(args, unsigned int);
	int number, last = u % 10, digit, exp = 1;
	int i = 1;

	u = u / 10;
	number = u;

	if (last < 0)
	{
		_putchar('_');
		number = -number;
		u = -u;
		last = -last;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = u;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
