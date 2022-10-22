#include "main.h"


/**
 * _isdigit - checks for digit from 0 to 9
 * @c: the character
 * Return: 1 if c is a digit and otherwise
 */
int _isdigit(int c)
{
	int x = 0;

	if (c >= '0' && c <= '9')
		x = 1;

	return (x);
}
