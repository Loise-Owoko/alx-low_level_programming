#include "main.h"

int actual_prime(int l, int r);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @l: number to evaluate
 *
 * Return: 1 if l is a prime number, 0 if not
 */
int is_prime_number(int l)
{
	if (l <= 1)
		return (0);
	return (actual_prime(l, l - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @l: number to evaluate
 * @r: iterator
 *
 * Return: 1 if l is prime, 0 if not
 */
int actual_prime(int l, int r)
{
	if (r == 1)
		return (1);
	if (l % r == 0 && r > 0)
		return (0);
	return (actual_prime(l, r - 1));
}
