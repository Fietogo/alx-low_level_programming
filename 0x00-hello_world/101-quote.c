#include <stdio.h>
/**
 * main - Entry point
 * description - task at hand
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str1, 1, 59, stderr);
	return (1);
}
