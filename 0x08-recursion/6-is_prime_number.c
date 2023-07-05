#include "main.h"
/*
 * is_prime_number - prints out prime numbers
 * @n: integer
 *
 * Return: 1 if input is prime number, otherwise 0
 */
int is_prime_helper(int n, int divisor);
int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/*
 * is_prime_helper - checks the actual prime number check
 * @n: integer
 * @divisor: integer
 * Return: 1
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor >= n)
		return (1);/*if it is a prime number*/
	if (n % divisor == 0)
		return (0); /*if divisible by divisor*/
	if (divisor == 2)
		return is_prime_helper(n, divisor + 1); /*for even number*/
	return (is_prime_helper(n, divisor + 1));/*odd number only*/
}
