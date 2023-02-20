#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - Determines if the number is positive, negative or zero.
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	 printf("%d is positive\n", n);
	else if (n == 0)
	 printf("%d is zero\n", n);
	else
	 printf("%d id negative\n", n);
	return (0);
}
