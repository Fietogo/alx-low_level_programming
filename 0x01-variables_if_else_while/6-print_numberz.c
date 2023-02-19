#include <stdio.h>
/**
 * main - single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		int digit;
		int divisor;

		divisor = 1;
		while (number / divisor >= 10)
		{
			divisor *= 10;
		}
		while (divisor > 0)
		{
			digit = (number / divisor) % 10;
			putchar('0' + digit);
			divisor /= 10;
		}
	}
	putchar('\n');

	return (0);
}
