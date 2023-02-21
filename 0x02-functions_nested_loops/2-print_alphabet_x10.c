#include <stdio.h>
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int n = 'a';
	int i = 0;
	do {
    		for (n = 'a'; n <= 'z'; n++)
	  	{
		  	putchar(n);
			putchar('\n');
	  	}
		i++;
  	} while(i < 10);
}
