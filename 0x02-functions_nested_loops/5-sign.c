#include"main.h"


/**
 * print_sign - Entry point
 *
 * Description: prints the sign of a number.
 *
 * @i: function input
 *
 * Return: returns 1 if `i` is greater
 *         else always 0 (Success)
*/

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	} else if (i < 0)
	{
		_putchar('-');
		return (0);
	}
	_putchar('0');
	return (-1);

}
