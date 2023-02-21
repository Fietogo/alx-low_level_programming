#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 time in lower case
*/
void print_alphabet_x10(void)
{
	int counter;
	char abc;

	for (counter = 0; counter < 10; counter++)
	{
		for (abc = 97; abc <= 122; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
