#include "main.h"

/**
 * _printf - function to print a string to stdout
 * @format: character string to print
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_37},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_srev},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exclusive_string}, {"%p", print_pointer}
	};

	va_list args;
	int a = 0, b, len = 0;
	int precision, flags, size, width

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (m[b].id[0] == format[a] && m[b].id[1] == format[a + 1])
			{
				precision = get_precision(format, &a, args);
				flags = get_flags(format, &a);
				size = get_size(format, &a);
				width = get_width(format, &a, args);

				len += m[b].f(args, precision, flags. size. width);
				a = a + 2;
				break;
			}
			b--;
		}
		if (b < 0)
		{
			_putchar(format[a]);
			len++;
			a++;
		}
	}
	va_end(args);
	return (len);
}
