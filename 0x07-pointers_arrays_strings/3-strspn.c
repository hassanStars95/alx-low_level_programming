#include "main.h"


/**
 * _strspn - gets the length of a prefix substring.
 * @s: comparing string
 * @accept: compared to string
 * Return: Returns the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;

	j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
			{
				break;
			}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
