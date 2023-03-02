#include "main.h"

/**
 * reverse_array - Entry point
 * @a: Array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int j, temp;

	j = temp = 0;
	n -= 1;

	while (j <= n)
	{
		temp = a[n];
		a[n--] = a[j];
		a[j++] = temp;
	}
}
