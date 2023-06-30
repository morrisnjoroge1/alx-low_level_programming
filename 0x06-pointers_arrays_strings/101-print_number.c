#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	int divisor = 1;
	int temp = n;

	while (temp != 0)
	{
		divisor *= 10;
		temp /= 10;
	}
	divisor /= 10;

	while (divisor != 0)
	{
		int digit = n / divisor;

		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
