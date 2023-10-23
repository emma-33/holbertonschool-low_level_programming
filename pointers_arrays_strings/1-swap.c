#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the values of two integers
*
* @a: first int
* @b: second int
*/

void swap_int(int *a, int *b)
{
	int temporary = 0;

	temporary = *b;
	*b = *a;
	*a = temporary;
}
