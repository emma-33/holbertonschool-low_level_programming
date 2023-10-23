#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 */

void rev_string(char *s)
{
	int i, len, temporary;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temporary = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temporary;
	}
}
