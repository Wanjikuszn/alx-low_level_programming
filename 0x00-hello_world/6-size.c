#Include < stdio.h >
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void) /**
	*main function - Function allows initialization and printing of variables
	*/

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
/**
 *Return: (0);
 */
}
gcc 6 - size.c - m32 - o size32 2 > / tmp / 32
