#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - Entry point
 * @dest: string
 * @src: string
 * Description: 'This function appends the src string
 * to the dest string, overwriting the terminating null byte
 * (\0) at the end of dest, and then adds a terminating null byte'
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int j = 0, dest_len = 0;

	while (dest[j++])
		dest_len++;

	for (j = 0; src[j]; j++)
		dest[dest_len++] = src[j];

	return (dest);
}
