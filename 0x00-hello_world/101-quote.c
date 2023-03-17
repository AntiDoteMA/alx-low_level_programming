#include <unistd.h>
/**
 * main - Entry point
 *
 * This program uses the write() function from the <unistd.h>
 * header to print the desired message to the standard
 * error output;
 * Return: This time we return an error 1.
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
