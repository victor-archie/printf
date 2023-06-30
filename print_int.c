#include "main.h"

/**
 * print_int - prints an integer
 * @args: argument
 * Return: length of character printed
 */

int print_int(va_list args)
{
	int i = va_arg(args, int);
	int number, last = i % 10, digit, exp = 1;
	int j = 1;

	i = i / 10;
	number = i;

	if (last < 0)
	{
		_putchar('_');
		number = -number;
		i = -i;
		last = -last;
		j++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = i;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');

	return (j);
}

/**
 * print_dec - prints decimal
 * @args: argument to covert to decimal
 * Return: number of characters printed
 */

int print_dec(va_list args)
{
	int i = va_arg(args, int);
	int number, last = i % 10, digit;
	int j = 1, exp = 1;

	i = i / 10;
	number = i;

	if (last < 0)
	{
		_putchar('_');
		number = -number;
		i = -i;
		last = -last;
		j++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = i;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');

	return (j);
}
