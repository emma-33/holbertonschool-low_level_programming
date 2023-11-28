#include "main.h"

/**
* get_bit - return the value of a bit at a given index
* @n: int to take the bit from
* @index: index
* Return: value of the bit at index index or -1
* if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 1;

	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	i = i << index;

	if (n & i)
		return (1);

	else
		return (0);
}
