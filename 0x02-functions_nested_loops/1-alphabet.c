#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int n = 'a';

	for (n; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
