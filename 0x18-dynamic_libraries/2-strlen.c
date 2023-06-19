#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: length.
 */
int _strlen(char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
