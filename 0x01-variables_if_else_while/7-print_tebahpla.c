#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse, followed 
 * by a new line.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char n;

	for (n = 39; n >= 30; --n)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
