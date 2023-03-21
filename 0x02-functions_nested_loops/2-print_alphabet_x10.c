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
	int i = 1;

	while (i <= 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
