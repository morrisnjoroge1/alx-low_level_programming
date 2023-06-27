#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*puts_half - puts half of a string
*@str: string
*Return:void
*/
void puts_half(char *str)
{
	int len = strlen(str);
	int half = len / 2;

	if (len % 2 == 1)
		half++;
	printf("%.*s\n", len - half, str + half);
}
