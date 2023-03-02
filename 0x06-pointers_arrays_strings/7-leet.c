#include "main.h"

/**
 * leet - Entry point
 * @str: string
 *
 * Return: Pointer to string
 */

char *leet(char *str)
{
	int n, j;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071"

	n = 0;
	for (n = 0. str[n] != '\0; n++)
	{
		for (j = 0; subs[j]; != '\0'; j++)
			if (str[n] == subs[j])
				str[n] = le[j / 2];
	}
	return (str);
}
