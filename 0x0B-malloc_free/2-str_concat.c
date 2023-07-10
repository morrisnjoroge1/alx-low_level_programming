#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - a function that concatenates two strings.
*
* @s1: input to string 1
* @s2: input to string 2
*
* Return: NULL on faliure
*/
char *str_concat(char *s1, char *s2)
{
int a = 0;
int b = 0;
int i, j;
char *s;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* calculate length of s1 and s2*/
while (s1[a] != '\0')
a++;
while (s2[b] != '\0')
b++;
/*memory for concatenated string */
s = malloc((a + b + 1) * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++) /*add the first string to array s*/
s[i] = s1[i];
/*add the second string to array s*/
for (j = 0; s2[j] != '\0'; j++)
{
s[i] = s2[j];
i++;
}
/*null terminate our new string*/
s[i] = '\0';

return (s);
}
