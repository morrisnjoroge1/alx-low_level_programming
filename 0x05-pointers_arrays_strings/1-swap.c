#include "main.h"
/**
 *swap int - swaps two values
 *@a: *a
 @b: *b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
