#include <stdio.h>

/**
 * main - program that prints all arguments passed into it
 * including the first one
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;
	
	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
		(void)argc;
	}
	return (0);
}
