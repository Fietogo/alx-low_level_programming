#include "main.h"
/**
 * _isupper - checks if passed character is uppercase
 * @c: 'passed argument'
 * Description: Write a function that checks for uppercase character.
 * Prototype: int _isupper(int c)
 * Returns 1 if c is uppercase els returns 0 otherwise
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
