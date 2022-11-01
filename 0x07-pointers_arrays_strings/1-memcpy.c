#include "main.h"


/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
