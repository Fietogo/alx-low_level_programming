#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 time in lower case
 */
int main(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; 'b'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n'); letter++;
	}
	return (0);
}
