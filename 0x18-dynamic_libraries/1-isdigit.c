#include "main.h"
/**
* _isdigit - check if numbers are 0 - 9
* @c: to be checked
*
* Return: 1 if c is digit otherwise 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
