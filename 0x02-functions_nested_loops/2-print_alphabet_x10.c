#include <stdio.h>
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int n = 'a';

	do{
    for (n = 'a'; n <= 'z'; n++)
	  {
		  putchar(n);
	  }
    int i = 0;
    i++;
  }while(i <10)
	putchar('\n');
}
