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

	for (n = 122; n >= 97; --n)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
