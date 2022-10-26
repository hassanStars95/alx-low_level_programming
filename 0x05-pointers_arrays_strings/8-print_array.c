#include "main.h"
#include <stdio.h>


/**
 * print_array - prints array
 * @a: array
 * @n: values to be printed
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", b[a]);
		if (b != n - 1)
			printf(",");
	}
	printf("\n");
}
