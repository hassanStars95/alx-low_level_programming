#include <stdio.h>


/**
 * main - this is a function to print its name.
 * @argc: argc parameter
 * @argv: argv parameter
 * Return: 0 is success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
