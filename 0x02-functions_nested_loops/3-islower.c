#include"main.h"


/**
 * _islower - Entry point
 *
 * Description: checks for lowercase character.
 *
 * @i: function input
 *
 * Return: returns 1 if `i` is lowercase
 *         else always 0 (Success)
*/

int _islower(int i)
{
	if (i <= 122 && i >= 97)
	{
		return (1);
	}
	return (0);

}
