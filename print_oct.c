#include "main.h"

/**
 * print_oct - outputs an octal number.
 * @val: conditions.
 * Return: counter.
 */
int print_oct(va_list val)
{
	int p;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (p = 0; p < counter; p++)
	{
		array[p] = temp % 8;
		temp /= 8;
	}
	for (p = counter - 1; p >= 0; p--)
	{
		_putchar(array[p] + '0');
	}
	free(array);
	return (counter);
}
