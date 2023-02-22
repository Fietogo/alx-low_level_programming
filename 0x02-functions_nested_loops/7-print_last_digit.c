#include "main.h"
/**
 * print_last_digit - Entry point
 * @j: 'integer'
 * Description: 'Write a function that prints the last digit of a number'
 * Returns the last digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int j)
{
	int lastDigit = j % 25;

	if (j < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit + 40);
	return (lastDigit);
}
