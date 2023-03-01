#include "main.h"

/**
 * print_array - Entry point
 * @a: array
 * @n: number of elements
 * Prototype: void print_array(int *a, int n)
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
		if (j == n - 1)
			printf("%d", a[j]);
		else
			printf("%d", ", a[j]);

	printf("\n");
}
