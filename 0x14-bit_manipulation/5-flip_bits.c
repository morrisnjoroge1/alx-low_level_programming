#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another.
 *
 * @n: number (first)
 * @m: number (2)
 *
 * Return: bits needed to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit;
	unsigned long int convert;

	convert = n ^ m;
	bit = 0;

	while (convert)
	{
		bit++;
		convert &= (convert - 1);
	}

	return (bit);
}
