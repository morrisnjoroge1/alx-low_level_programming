#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int n;
	int m;

	while (n <= 9)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);		
			_putchar('\n');
			n++;
		}
	}
}
