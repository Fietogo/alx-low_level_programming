#include "main.h"

/**
 * puts_half - Entry point
 * @str: String
 * Prototype: void puts_half(char *str)
 */

void puts_half(char *str)
{
	int j = 0;
	int i = 0;
	/* j is the string length */

	while (str[j])
		j++;

	i = (j % 2 == 0) ? j / 2 : (j + 1) / 2;

	while (str[i])
		_putchar(str[i++]);

	_putchar('\n');
}
