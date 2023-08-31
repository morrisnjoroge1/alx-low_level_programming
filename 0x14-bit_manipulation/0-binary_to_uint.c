#include "main.h"

/**
 * binary_to_uint - binary number to an unsigned int
 *
 * @b: pointer string to (0 and 1)
 *
 * Return:  converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int t;
	int p;

	t = 0;
	if (!b)
		return (0);
	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
	}
	for (p = 0; b[p] != '\0'; p++)
	{
		t <<= 1;
		if (b[p] == '1')
			t += 1;
	}
	return (t);
}

