#include "main.h"
/*
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* if is negative*/
		return (-1);
	else if (y == 0) /*if x^1*/
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
