#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int count;

	count = 1;
	if (*(char *)&count == 1)
	{
		return (1);
	}
	else
		return (0);
}
