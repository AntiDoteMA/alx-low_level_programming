#include"main.h"


/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints the alphabet, in lowercase 10 times
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}

}
