#include "main.h"

/**
 * _strlen - Entry point
 * @s: Pointer
 * Prototype: int _strlen(char *s)
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j])
		++j;

	return (j);
}
