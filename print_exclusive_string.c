#include "main.h"
/**
 * print_exclusive_string - outputs exclusuive string.
 * @val: condition.
 * Return: length of the string.
 */

int print_exclusive_string(va_list val)
{
	char *s;
	int p, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] < 32 || s[p] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[p];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_aux(cast);
		}
		else
		{
			_putchar(s[p]);
			len++;
		}
	}
	return (len);
}
