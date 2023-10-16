#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * betty style doc for function main goes there 
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d",&n);
	last_digit = n % 10;
	if( last_digit > 5 )
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if( last_digit == 0 )
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else if( last_digit < 6 && last_digit != 0 )
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	} 
	return (0);
}
