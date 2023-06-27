#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - prints part of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < str[i]; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
