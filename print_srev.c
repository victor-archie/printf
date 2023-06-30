#include "main.h"

/**
 * print_srev - function will output a str in backward
 * @args: struct type  va_arg where its appointed  print arguments
 * Return: the string
 */
int print_srev(va_list args)
{

	char *s = va_arg(args, char*);
	int p;
	int q = 0;

	if (s == NULL)
		s = "(null)";
	while (s[q] != '\0')
		q++;
	for (p = q - 1; p >= 0; p--)
		_putchar(s[p]);
	return (q);
}
