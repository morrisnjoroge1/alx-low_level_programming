#include "main.h"
/**
* *rot13 - encodes a string using rot13.
* @str:  array pointer
* Return: (str)
*/
char *rot13(char *str)
{
char *ptr = str;
char *rot13Chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *rot13Map = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, j;

for (i = 0; ptr[i] != '\0'; i++)
{
for (j = 0; rot13Chars[j] != '\0'; j++)
{
if (ptr[i] == rot13Chars[j])
{
ptr[i] = rot13Map[j];
break;
}
}
}
return (str);
}
