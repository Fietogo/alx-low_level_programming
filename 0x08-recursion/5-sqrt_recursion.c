#include "main.h"

/**
 * sqrt_find - checks the square root
 * @g: root to be checked
 * @c: number
 *
 * Return: the square root of c or -1 if no square
 */

int sqrt_find(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_find(g + 1, c));
}

/**
 * _sqrt_recursion - returns square root
 * @n: number
 *
 * Return: Natural square root or -1 if no square
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_find(1, n));
}
