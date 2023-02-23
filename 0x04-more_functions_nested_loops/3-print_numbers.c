#include "main.h"
/**
 * print_nummbers - prints nubers from 0 to 9 followed by new line
 * Return: Void
 */
void print_number(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar("%d", i);
	_putchar("\n");
}
