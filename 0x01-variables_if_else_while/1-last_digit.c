#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function goes there */

/**
 * Main - entry point
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int n;

	int m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* yur code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digitof %d id %d and is greater than S\n", n, m);
	if ( n == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (n < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}