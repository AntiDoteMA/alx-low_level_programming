#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: pointer to a constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int elm;
	char *str;

	/* iterate the argument list from the start */
	va_start(arg, n);

	for (elm = 0; elm < n; elm++)
	{
		str = va_arg(arg, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && elm != n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
