#include "main.h"
#include <string.h>

/**
 * rev_string - Entry point
 * @s: String
 * Prototype: void rev_string(char *s)
 */

void rev_string(char *s)
{
	int n = 0;
	int j = 0;
	char temp;

	while (s[n])
		n++;

	while (n > j)
	{
		temp = s[--n];
		s[n] = s[j];
		s[j++] = temp;
	}
}
