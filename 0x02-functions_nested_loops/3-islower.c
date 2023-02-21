#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * int _islower(int c) - a function that return 0 or 1
 *
 * Return: Always 0 (Succes)
 */
int _islower(int c)
{
  if(islower(c) == TRUE)
  {
    return 1;
  } else
  {
    return 0;
  }
}
