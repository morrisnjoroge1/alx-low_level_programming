#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
 * set_string - sets the value of a pointer to a char
 * @s: string
 *
 * Return:
 */
void set_string(char **s, char *to)
{
	*s = to;
}
/*pointer to 'char' ('char **s) and to pointer s*/
/*sets value of pointer s to value of pointer to*/
/*br defrencing s*/
