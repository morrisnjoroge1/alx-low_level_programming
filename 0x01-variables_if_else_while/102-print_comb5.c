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

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n <= m)
			{
				putchar('0' + n / 10);
				putchar('0' + n % 10);
				putchar(' ');
				putchar('0' + m / 10);
				putchar('0' + m % 10);
				if (n != 9 || m != 9)
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
