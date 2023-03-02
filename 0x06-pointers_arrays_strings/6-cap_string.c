#include "main.h"

/**
 * cap_string - Entry point
 * @s: pointer
 * Return: Returns capitalised string
 */

char *cap_string(char *s)
{
	int n, j;
	char sp[] = " \t\n,;.!?\"(){}";

	n = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[n] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (s[n - 1] == sep[j] && (s[n] >= 'a' && s[n] <= 'z'))
				s[n] -= ('a' - 'A');
		n++;
	}
	return (s);
}

