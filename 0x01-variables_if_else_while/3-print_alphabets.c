#include <stdio.h>

/**
 * main - alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char alpha;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
