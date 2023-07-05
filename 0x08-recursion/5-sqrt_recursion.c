#include "main.h"
/*
* _sqrt_recursion - returns the natural square root of a number
* @n: input number
*
* Return: sqrt
*/
int _sqrt_recursion(int n)
{
if (n < 0) /*if is negative*/
return (-1);
if (n == 0 || n == 1)
return (n); /*if number itself 0 ||1*/
return (sqrt_helper(n, 1, n));
}
/*
* sqrt_helper - function call
* @n integer
* @start: input number
* @end: input number
* Return: sqrt
*/
int sqrt_helper(int n, int start, int end)
{
if (start > end)
return (-1);
int mid = (start + end) / 2;
int square = mid * mid;
if (square == n)
return (mid);
if (square > n)
return (sqrt_helper(n, start, mid - 1));
return (sqrt_helper(n, mid + 1, end));
}
