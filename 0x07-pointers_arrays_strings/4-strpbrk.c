#include "main.h"


/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: character to compare
 * @accept: character compared to
 * Return: Returns a pointer to the byte in s that matches
 *  one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
