#include "main.h"


/**
 * checkprime - checks for prime number
 * @p: number
 * @i: number
 * Return: 1 if prime else 0.
 */
int checkprime(int p, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (p % i == 0)
			return (0);
		else
			return (checkprime(p, i - 1));
	}
}
/**
 * is_prime_number - returns 1 if the input integer is
 *  a prime number, otherwise return 0.
 *  @n: number
 *  Return: integer
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
		return (checkprime(n, n / 2));
}
