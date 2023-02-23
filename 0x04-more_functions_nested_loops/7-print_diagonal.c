#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int m, j;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			for (j = 0; j < m; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
