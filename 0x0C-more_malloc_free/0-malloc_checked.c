#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory using malloc.
 * @b: integer
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
		exit(98);
	return (mal);
}
