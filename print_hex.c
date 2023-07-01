#include "main.h"

/**
 * print_hex - outputs hexadecimal number.
 * @val: condition.
 * Return: counter.
 */
int print_hex(va_list val)
{
	int p;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;
	char hexDigit;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	if (array == NULL)
	{
		return (-1);
	}

	for (p = 0; p < counter; p++)
	{
		array[p] = temp % 16;
		temp /= 16;
	}
	for (p = counter - 1; p >= 0; p--)
	{
		if (array[p] < 9)
		{
			_putchar(array[p] + '0');
		}
		else
		{
			hexDigit = (array[p] - 10) + 'a';
			_putchar(hexDigit);
		}
	}
	free(array);
	return (counter);
}
