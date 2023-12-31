#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
*
* @n: bits (numbers)
*
* @index: index of bit starting from 0
*
* Return: the value of the bit at index index or -1 if an error occured
*
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int result;

if (index > 64)
return (-1);

result = n >> index;

return (result & 1);
}

