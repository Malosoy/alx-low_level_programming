#include <stdio.h>

/**
* main - Prints all possible different combinations of two digits
* using the smallest combination of two digits
* * Return: 0 if program completes successfully
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
{
	for (j = i + 1; j <= 9; j++)
{
	putchar(i + '0');
	putchar(j + '0');

	if (i != 8 || j != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
	printf("\n");

	return (0);
}
