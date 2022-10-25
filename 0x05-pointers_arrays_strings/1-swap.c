#include "main.h"


/**
 * swap_int - swipes the value of two integers
 * @a: integer a
 * @b: integer b
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
