#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: 'integer'
 * Description: 'Write a program that prints all natural numbers'
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int counter;

	if (n < 98)
	{
		for (counter = n; counter < 98; counter++)
		{
			printf("%d, ", counter);
		}
	}
	else
	{
		for (counter = n; counter > 98; counter--)
		{
			printf("%d, ", counter);
		}
	}
	printf("%d\n", counter);
}
