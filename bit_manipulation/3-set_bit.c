#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to number
* @index: index
* Return: 1 if it worked or -1 if an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	*n = *n | mask;

	return (1);
}
