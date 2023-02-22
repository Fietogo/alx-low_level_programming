#include "main.h"
/**
 * _abs - Entry point
 * @c: 'interger'
 * Description: 'Write a function that computes the absolute value of an integer'
 * Prototype - int _abs(int)
 * Return: Always 0 Success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	return (c);
}
