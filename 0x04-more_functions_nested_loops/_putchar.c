#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success
 * on error, -1 is returned, and ermo is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

