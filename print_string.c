#include "main.h"

/**
 * print_string - prints a string
 * @val: parameter
 * Return: string length
 */

int print_string(va_list val)
{
	char *s;
	int a, length;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		length = _strlen(s);
		for (a = 0; a < length; a++)
			_putchar(s[a]);
		return (length);
	}
	else
	{
		len = _strlen(s);
		for (a = 0; a < length; a++)
			_putchar(s[a]);
		return (length);
	}
}
