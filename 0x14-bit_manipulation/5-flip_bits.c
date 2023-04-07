#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @m: first number
 * @w: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int m, unsigned long int w)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = m ^ w;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}



