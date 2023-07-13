#include "main.h"
#include <stdlib.h>
/*
 * malloc_checked - function that allocates memory using
 *
 * @b: int to assign bytes
 *
 * Return: ptrr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
