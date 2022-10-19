#include "main.h"


/**
 * _isalpha - checks for lower or uppercase letters
 * @c: the character
 * Return: returns 1 if the letter is an upper or lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' || 'A' && c <= 'z' || 'Z')
		return (1);
	else
		return (0);
}
