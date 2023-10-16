#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* assign a random number to the variable n and prints if n is positive, 
 * equal to 0 or negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n > 0 ) {
	  /* if n is greater than 0, then print the following */
	  printf( "%u is positive\n", n);
	}
	else if( n == 0 ) {
	  /* if n is equal 0, then print the following */
	  printf( "%u is zero\n", n);
	}
	else if( n < 0 ) {
	  /* if n is less than 0, then print the following */
	  printf( "%u is negative\n", n);
	}
	return 0;
}
