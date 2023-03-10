#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: string
 * @src: string
 * @n: number of strings to copy
 * Description: Function should work
 * Return: Destination string
 */

cher *_strncpy(char *dest, char *src, int n)
{
	int j;

	if (len(src) >= n)
	{
		for (j = 0; j < n; j++)
			dest[j] = src[j]
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			if (i < len(src))
				dest[j] = src[j];
			else
				dest[j] = '\0';
		}
		dest[j] = '\0';
	}
	return (dest);
}

/**
 * len - Entry point
 * @str: String
 * Description: length of string
 * Return: String length
 */

int len(char *str)
{
	int lenstr = 0;

	while (str[lenstr] != '\0')
		lenstr++;
	return (lenstr);
}
