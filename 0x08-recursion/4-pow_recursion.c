#include "main.h"

/**
 * _pow_recursion - returns x to power of y
 * @x: number raised
 * @y: Power of
 *
 * Return: x to por of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return(x * _pow_recursion(x, y - 1));
}
