#include <stdio.h>
/**
 * Main - Entry points
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	while (c <= 'z') 
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
