#include "main.h"

/**
 * _puts - Entry point
 * Description: prints string followed by new line.
 * @str: String
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j])
		_putchar(str[j++]);

	_putchar('\n');
}
