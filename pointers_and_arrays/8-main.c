#include <stdio.h>

/**
 * modif_my_char_var - set the char to o
 *
 * @cc: a pointer the char we want to set to o
 *
 * Return: nothing.
 */

void modif_my_char_var(char *cc, char ccc)
{
	printf("Value of 'cc': %p\n", cc);
	printf("Address of 'cc': %p\n", &cc);
	printf("Value of 'cc': %d\n", ccc);
	printf("Address of 'cc': %p\n", &ccc);
	*cc = 'o';
	ccc = 'l';

}

/**
 * main - how to change the value of a variable from outside the 
 * function it is declared in, using a pointer.
 * 
 * Return: Always 0.
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of 'c' before the call: %d\n", c);
	printf("Address of 'c' : %p\n", &c);
	printf("Value of 'p' : %p\n", p);
	printf("Address of 'p' : %p\n", &p);
	modif_my_char_var(p, c);
	printf("Value of 'c' after the call: %d\n", c);
	return(0);
}
