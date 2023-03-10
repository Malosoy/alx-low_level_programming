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
	int b;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}

	for (a = 1; a < argc; a++)
	{
		char *number = argv[a];

		b = 0;
		while (number[b] != '\0')
		{
			if (!isdigit(number[b]))
			{
				printf("Error\n");
				return (1);
			}
			a++;
		}

		n = atoi(number);

		if (n > 0)
		{
			sum += n;
		}

	}
	printf("%d\n", sum);
	return (0);
}
