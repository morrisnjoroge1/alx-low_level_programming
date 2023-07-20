#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;/* initialize the argument list from the start */

	va_start(ap, n);

	for (i = 0; i < n; i++)/* iterate through each argument*/
	{
		/* print next argument */
		printf("%d", va_arg(ap, int));
		/* print separator only between arguments */
		if (separator && i <  n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(ap);
	printf("\n");
}
