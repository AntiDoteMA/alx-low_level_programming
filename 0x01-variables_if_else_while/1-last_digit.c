#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: check if n is positive or negativ or zero.
 *
 * Return: Always 0 (Succesful)
*/

int main(void)
{
	int n, ldgt;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldgt = n % 10;
	if (n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldgt);
	} else if (n >= 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldgt);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, ldgt);
	}
	return (0);
}
