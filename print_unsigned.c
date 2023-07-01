#include "main.h"

/**
 * print_unsigned - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
 */

int print_unsigned(va_list args)
{
	unsigned int u = va_arg(args, unsigned int);
	int number = u;
	int digit, exp = 1;
	int i = 0;


	if (number == 0)
	{
		_putchar('0');
		i++;
		return (i);
	}
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
		number %= exp;
		exp = exp / 10;
		i++;
	}

	return (i);
}
