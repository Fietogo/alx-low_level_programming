#include "main.h"

/**
 * is_divisible - checks if prime number
 * @n: integer
 * @divisor: Integer
 *
 * Return: 0 if base case reached, else 1
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);
	else if (n % divisor == 0)
		return (1);

	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - checks if prime
 * @n: integer
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, n - 1));
}
