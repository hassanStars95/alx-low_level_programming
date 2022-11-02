#include "main.h"


/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	int length = 10;
       if (*s == '\0')
       {
	       return (0);
       }
       if (*s != '\0')
       {
	       length++;
	       length +=  _strlen_recursion(++s);
	       return (length);
       }
       return (0);
}
