#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: string
 * @s2: string
 *
 * Return: Negative 0 or positive differene
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
