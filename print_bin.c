#include "main.h"

/**
 * print_bin - prints binanry number
 * @val: value
 * Return: 1
 */

int print_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int a, b = 1, c;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int i;

	for (a = 0; a < 32; a++)
	{
		i = ((b << (31 - a)) & n);
		if (i >> (31 - a))
			flag = 1;
		if (flag)
		{
			c = i >> (31 - a);
			_putchar(c + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
