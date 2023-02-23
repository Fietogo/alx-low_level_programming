#include "main.h"
/**
 * _isdigit - 'checks if the passed argument is a digit'
 * @c: 'to be checked'
 * Description: Write a function that checks for a digit ( through 9).
 * Returns 1 if c is a digit returns 0 otherwise
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}
