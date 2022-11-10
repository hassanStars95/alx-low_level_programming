#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, y = 0;

		if (str == NULL)
			return (NULL);
		i = 0;
		while (str[i] != '\0')
			i++;
		ptr = malloc(sizeof(char) * (i + 1));
		if (ptr == NULL)
			return (NULL);
		for (y = 0; str[y]; y++)
			ptr[y] = str[y];
		return (ptr);
}
