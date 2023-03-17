#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet except q and e using
 * only two putchar calls.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char n;

	for (n = 30; n <= 39; ++n)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
