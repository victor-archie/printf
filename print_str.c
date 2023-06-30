#include "main.h"

/**
 * _strlen - length of string
 * @s: character pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlenc - strlen function for const char pointer
 * @s: char pointer
 * Return: length of string
 */

int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
