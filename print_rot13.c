#include "main.h"

/**
 * print_rot13 - output str to ROT13 put into buffer
 * @args: variable struct va_arg where is allocated printf arguments
 * Return: counter
 */
int print_rot13(va_list args)
{
	int p, q, counter = 0;
	int w = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (p = 0; s[p]; p++)
	{
		w = 0;
		for (q = 0; alpha[q] && !w; q++)
		{
			if (s[p] == alpha[q])
			{
				_putchar(beta[q]);
				counter++;
				w = 1;
			}
		}
		if (!w)
		{
			_putchar(s[p]);
			counter++;
		}
	}
	return (counter);
}
