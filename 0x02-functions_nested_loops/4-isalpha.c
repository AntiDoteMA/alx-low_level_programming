#include"main.h"


/**
 * _isalpha - Entry point
 *
 * Description: checks for alphabetic character.
 *
 * @i: function input
 *
 * Return: returns 1 if `i` is lowercase
 *         else always 0 (Success)
*/

int _isalpha(int i)
{
	if ((i <= 122 && i >= 97) || (i <= 90 && i >= 65))
	{
		return (1);
	}
	return (0);

}
