#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/*
* _strdup - function that returns a pointer to a newly
* allocated space in memory
*
* @str: string to be duplicated
*
* Return: NULL if string is null
*/
char *_strdup(char *str)
{
int i = 0;
int l =0 ;
char *d;

if (str == NULL)
{
return (NULL);
}
/*length of string*/
while (str[l] != '\0')
l++;
/*memory for duplicate str*/
d = malloc((1 + 1) * (sizeof(char)));
if (d == NULL)
{
return (NULL);
}
while (str[i] != '\0')
/*copying form *str to *d*/
{
d[i] = str[i];
i++;
}
return (d);
}
