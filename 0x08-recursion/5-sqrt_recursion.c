#include "main.h"


/**
 * increament - increases to get a square
 * @i: first number
 * @n: second number
 * Return: returns i, i + 1 or -1
 */
int increament(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (increament(i + 1, n));
	if (i * i > n)
		return (-1);
	return (i);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: integers
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else if (n > 1)
	{
		return (increament(1, n));
	}
	return (1);
}
