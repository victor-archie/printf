#include "main.h"

/**
 * _putchar - prints a character
 * @c: character to be printed
 * Return: 1 is success
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
