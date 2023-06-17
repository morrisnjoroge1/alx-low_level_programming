#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 100; n++)
	{
		for (m = 0; m < 100; m++)
		{
			if (n <= m)
			{
				putchar('0' + n / 10);
				putchar('0' + n % 10);
				putchar(' ');
				putchar('0' + m / 10);
				putchar('0' + m % 10);
				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
