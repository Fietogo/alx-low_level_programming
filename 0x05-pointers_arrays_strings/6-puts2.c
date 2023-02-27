#include "main.h"

/**
 * puts2 - Entry point
 * @str: String
 * Prototype: void puts2(char *str)
 */

void puts2(char *str)
{
	int j = 0;

	while (str[j])
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
