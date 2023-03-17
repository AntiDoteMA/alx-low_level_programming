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
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
