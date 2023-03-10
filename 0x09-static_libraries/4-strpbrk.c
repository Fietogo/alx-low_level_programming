#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * *_strpbrk - searches string
 * @s: String
 * @accept: bytes
 *
 * Return: if a set is matched, a pointer, else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
