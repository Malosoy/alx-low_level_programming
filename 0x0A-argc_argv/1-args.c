#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * Return: Alway 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
