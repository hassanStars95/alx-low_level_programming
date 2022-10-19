#include "main.h"


/**
 * print_alphabet_x10 - prints alphabet ten times
 */
void print_alphabet_x10(void)
{
	int num;
	char ab;

	for (num = 0; num <= 9; num++)
	{	
		for (ab = 'a'; ab <= 'z'; ab++)
			_putchar(ab);
		_putchar('\n');
	}
}
