#include "main.h"

/**
 * print_HEX_aux - outputs hexadecimal numeration.
 * @num: output variables.
 * Return: counter.
 */
int print_HEX_aux(unsigned int num)
{
	int p;
	int *array;
	int counter = 0;
	unsigned int temp = num;
	char hexDigit;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (p = 0; p < counter; p++)
	{
		array[p] = temp % 16;
		temp /= 16;
	}
	for (p = counter - 1; p >= 0; p--)
	{
		if (array[p] < 10)
		{
			_putchar(array[p] +'0');
		}
		else
		{
			hexDigit = (array[p] - 10) + 'A';
			_putchar(hexDigit);
		}
	}
	free(array);
	return (counter);
}
