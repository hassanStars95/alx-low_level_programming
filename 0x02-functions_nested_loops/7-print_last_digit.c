#include "main.h"


/**
 * print_last_digit - prints last digits of given numbers by dividing by 10
 * @b: the character
 * Return: prints the last digit of a number
 */
int print_last_digit(int b)
{
	int rm = b % 10;

	if (rm < 0)
		rm *= -1;
	_putchar (rm + '0');
	return (0);
}
