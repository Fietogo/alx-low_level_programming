#include "main.h"

/**
 * factorial - Returns factorial
 * @n: number to return factorial
 *
 * Return: If n > 0 then factorial of n if n > 1 then error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
