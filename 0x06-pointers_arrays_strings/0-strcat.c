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
	int lenghtDest = 0, j;

	while (dest[lenthDest] != '\0')
		lenghtDest++;

	for (j = 0; src[j] != '\0; j++)
		dest[lenghtDest + j] = src[j];
	dest[lenghtDest + j] = '\0';

	return (dest);
}
