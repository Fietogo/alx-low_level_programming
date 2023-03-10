#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: String
 * @src: Source string
 * Prototype: char *_strcpy(char *dest, char *src)
 * Return: Ther pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
