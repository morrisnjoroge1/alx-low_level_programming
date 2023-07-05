#include "main.h"
/*
* wildcmp - compares two strings
* @s1: pointer
* @s2:pointer
*
* Return: 1 if identical otherwise o
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1); /*if both strings are empty*/
if (*s2 == '*')
{
if (*s1 == '\0')
return (wildcmp(s1, s2 + 1)); /*in s2 skip * and continue*/
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)); /* wildcard*/
/*matching for recursive*/
}
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1)); /* continue for char matching*/
return (0);
}
