#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;
	int p;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (p = m + 1; p < 10; p++)
			{
				putchar('0' + n);
				putchar('0' + m);
				putchar('0' + p);
				if (n != 7 || m != 8 || p != 9)
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
