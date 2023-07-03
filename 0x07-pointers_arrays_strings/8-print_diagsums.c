#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integer
 * @a: pointer
 * @i: variable
 * @p:
 * @s
 */
void print_diagsums(int *a, int size)
{
	int psums = 0;
	int ssums = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		psums += a[i * size + i];
		ssums += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", psums);
	printf("%d\n", ssums);
}
