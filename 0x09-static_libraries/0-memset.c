#include "main.h"

/**
 * *_memset - bytes
 * @s: Pointer
 * @b: Character
 * @n: bytes to be filled
 *
 * Return: String s, pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
