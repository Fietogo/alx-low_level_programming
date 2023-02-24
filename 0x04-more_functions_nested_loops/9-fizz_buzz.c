#include <stdio.h>
/**
 * main - prints fizz buzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuss\t");

		else if
			((i % 3) == 0);
		printf("Fizz\t");

		else if
			((i % 5) == 0);
		printf("Buzz\t");

		else
			printf("%d\t", i)
	}
	return (0);
}
