#include "main.h"

/**
 * _strncat - Entry point
 * @dest: string
 * @src: String
 * @n: integer
 * Desctription: 'Write a function that concatenates two strings'
 * Return: Return a pointer to the resulting string des
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, dest_len = 0;

	while (dest[j++])
	{
		dest_len++;
	}

	for (j = 0, src[j] && j < n; j++;)
	{
		dest[dest_len++] = src[j];
	}
	return (dest);
}
