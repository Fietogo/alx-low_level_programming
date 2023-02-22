#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int n, j, mult;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			mult = j * n;
			_putchar(44);
			_putchar(32);
			if (mult <= 9)
			{
				_putchar(32);
				_putchar(mult + 48);
			}
			else
			{
				_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
