#include "main.h"

/**
 * print_hex_aux - outputs hexadecimal number.
 * @num: condition.
 * Return: counter.
 */
int print_hex_aux(unsigned long int num)
{
	long int p;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;
	char hexDigit;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));
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
		if (array[p] < 10)
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
