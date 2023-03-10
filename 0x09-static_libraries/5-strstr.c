#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates substring
 * @haystack: String
 * @needle: substring
 *
 * Return: If located, a pointer, else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *een = haystack;
		char *twee = needle;

		while (*een == *twee && *twee != '\0')
		{
			een++;
			twee++;
		}
		if (*twee == '\0')
			return (haystack);
	}
	return (NULL);
}
