#include"main.h"


/**
 * _islower - Entry point
 *
 * Description: checks for lowercase character.
 *
 * Return: Always 0 (Success)
*/

int _islower(int i)
{
	if (i < 122 && i > 97)
	{
		return (1);
	} else
	{
		return (0);
	}

}
