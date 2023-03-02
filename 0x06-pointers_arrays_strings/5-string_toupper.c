#include "main.h"

/**
 * string_toupper - Entry point
 * @str: string
 * Return: Uppercase
 */

char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] <= 122 && str [j] >= 97)
			str[j] = str [j] - 32;
		else
			str[j] = str[j];
	}
	return (str);
}
