#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, n;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (a = 1; a < argc; a++)
	{
		char *number = argv[a];
		int b;

		for (b = 0; number[b] != '\0'; b++)
		{
			if (!isdigit(number[b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(number);

		if (n > 0)
		{
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
