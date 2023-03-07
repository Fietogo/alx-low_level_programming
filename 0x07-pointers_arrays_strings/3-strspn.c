#include "main.h"

/**
 * _strspn - length of substring
 * @s: string to be searched
 * @accept: prefix
 *
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes, count;

	bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				bytes++;
				count = 1;
			}
		}
		if (count == 0)
		{
			return (bytes);
		}
	}
	return (bytes);
}

