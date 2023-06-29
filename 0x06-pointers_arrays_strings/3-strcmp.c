#include "main.h"
/**
* _strcmp - compare two strings
* @s1: string
* @s2: string
* Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[1] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (s1[i] - s2[i]);
}
