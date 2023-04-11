#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @s - string that contains the binary number
 *
 * Return:converted number
 */
unsigned binary_to_uint(const char *s)
{
	int i;
	unsigned int dec_val = 0;
if (!s)
	return (0);

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (s[i] - '0');
	}

	return (dec_val);
}

