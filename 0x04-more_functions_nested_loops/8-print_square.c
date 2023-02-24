#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int n, j;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_puthar('\n');
		}
	}
	else
		_putchar('\n');
}
