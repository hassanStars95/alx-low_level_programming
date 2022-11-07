#include <stdio.h>


/**
 * main - this is a function to print its name.
 * @argc: argc parameter
 * @argv: argv parameter
 * Return: 0 is success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
