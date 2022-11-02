#include "main.h"
#include <stddef.h>


/**
 * _strstr -  locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: Returns a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
			if (*(haystack + point) != needle[point])
				break;
		}
		if (needle[point] == '\n')
			return (haystack);
	}
	return (NULL);
}

