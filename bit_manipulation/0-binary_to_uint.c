#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: the converted number or 0 if there is a char that is
* not 0 and not 1 in b or if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
		{
			result = (result << 1) | 0;
		}
		else if (*b == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	    b++;
	}
	return (result);
}
