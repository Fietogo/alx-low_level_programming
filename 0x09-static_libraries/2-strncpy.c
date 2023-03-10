#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: string
 * @src: string
 * @n: number of strings to copy
 * Description: Function should work
 * Return: Destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, src_cnt = 0;

	while (src[j++])
	{
		src_cnt++;
	}
	for (j = 0; src[j] && j < n; j++)
	{
		dest[j] = src [j];
	}
		for (j = src_cnt; j < n; j++)
		{	
			dest[j] = '\0';
		}
		return (dest);
}
		
