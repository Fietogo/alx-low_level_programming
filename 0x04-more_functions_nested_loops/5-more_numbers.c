#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to14
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, j;

	for (n = 0; n < 10; n++)
	{
		for (j = 0; j <= 14; j++)
		{
			(j > 9) ? _putchar((j / 10) + '0') : 0;
				_putchar((j % 10) + '0');
		}
		_putchar("\n");
	}
}



