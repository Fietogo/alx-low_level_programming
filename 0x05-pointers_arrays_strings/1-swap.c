#include "main.h"

/**
 * swap_int - Entry point
 * @a: Pointer to int.
 * @b: Pointer to int.
 * Prototype: void swap_int(int *a, int *b)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
