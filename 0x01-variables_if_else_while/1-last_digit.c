#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * description: 'This program will assign a random number to the variable n each time it is executed.'
 *
 * Return 0 (success)
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %i is %i and is 0\n", n, last);
	else (last < 6 && last != 0)
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);

	
