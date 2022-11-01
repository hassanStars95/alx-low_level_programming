#include "main.h"


/**
 * _memset -  fills memory with a constant byte
 * @s: first character
 * @b: second character
 * @n: number
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
