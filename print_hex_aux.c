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

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (p = 0; p < counter; p++)
	{
		array[p] = temp % 16;
		temp /= 16;
	}
	for (p = counter - 1; p >= 0; p--)
	{
		if (array[p] > 9)
			array[p] = array[p] + 39;
		_putchar(array[p] + '0');
	}
	free(array);
	return (counter);
}
