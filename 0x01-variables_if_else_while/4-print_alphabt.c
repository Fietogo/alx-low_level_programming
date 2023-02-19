#include <stdio.h>
/**
 * main - alphabet soup
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue; /* skipping q and e */
		}
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
