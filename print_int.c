#include "main.h"

/**
 * print_int - prints an integer
 * @args: argument
 * Return: length of character printed
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int number, last = num % 10, digit, exp = 1;
	int len = 1;

	num = num / 10;
	number = i;

	if (last < 0)
	{
		_putchar('_');
		number = -number;
		num = -num;
		last = -last;
		len++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = num;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number %= exp;
			exp = exp / 10;
			len++;
		}
	}
	_putchar(last + '0');

	return (len);
}

/**
 * print_dec - prints decimal
 * @args: argument to covert to decimal
 * Return: number of characters printed
 */

int print_dec(va_list args)
{
	int num = va_arg(args, int);
	int number, last = num % 10, digit;
	int len = 1, exp = 1;

	num = num / 10;
	number = i;

	if (last < 0)
	{
		_putchar('_');
		number = -number;
		num = -num;
		last = -last;
		len++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = num;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number %= exp
			exp = exp / 10;
			len++;
		}
	}
	_putchar(last + '0');

	return (len);
}
