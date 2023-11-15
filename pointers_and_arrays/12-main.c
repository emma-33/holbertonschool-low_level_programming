#include <stdio.h>

/**
 * main - Creates an array of chars and prints it
 *
 * Return: Always 0
 */

int main(void)
{
	char a[9];

   *a = 'H';
   *(a + 1) = 'o';
   *(a + 2) = 'l';
   a[3] = 'b';
   *(a + 4) = 'e';
   a[5] = 'r';
   a[6] = 't';
   a[7] = 'o';
   a[8] = 'n';
   printf("%c%c%c%c%c%c%c%c%c\n", a[0], a[1], a[2], a[3],
              a[4], a[5], a[6], a[7], a[8]);
   return (0);
}
