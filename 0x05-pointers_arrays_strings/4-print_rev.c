#include "main.h"

/**
 * print_rev - Entry point
 * @s: String
 * Prototype: void print_rev(char *s)
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;

	while (j--)
		_putchar(s[j]);
	_putchar('\n');
}
