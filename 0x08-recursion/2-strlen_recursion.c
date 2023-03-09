#include "main.h"

/**
 * _strlen_recursion - Returns length of string
 * @s: String
 *
 * Return: Length
 */

int _strlen_recursion(char *s)
{
	/*j=lenght of string*/
	int j = 0;

	if (*s)
	{
		j++;
		j = j + _strlen_recursion(s + 1);
	}
	return (j);
}
