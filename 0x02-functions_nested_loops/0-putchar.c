#include<stdio.h>
#include<string.h>
#include"main.h"


/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char var[] = "_putchar";
	int strl = strlen(var);
	int i;

	for (i = 0; i <= strl; i++)
	{
		_putchar(var[i]);

	}
	_putchar('\n');
	return (0);
}
