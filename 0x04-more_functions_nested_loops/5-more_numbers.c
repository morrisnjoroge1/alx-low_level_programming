#include "main.h"
/**
 * more_numbers - print 10 times the numbers 0 to 14
 * Return: 10 times numbers 0 to 14
 */
void more_numbers(void)
{
int i;
int j;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 14; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
