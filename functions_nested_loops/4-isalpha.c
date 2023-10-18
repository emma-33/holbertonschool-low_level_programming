#include "main.h"

/**
 * _isalpha - Entry point,checks for alphabetic
 * character
 * @c: character to check
 *
 * Return: 1 if c is a letter else 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}


}
