#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers
* should be printed in ascending order
*
* Return: 0 if program completes successfully
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
{
	for (j = i; j < 100; j++)
{
	/**print first number*/
	putchar(i / 10 + 48);
	putchar(i % 10 + 48);
	putchar(' ');

	/**print second number*/
	putchar(j / 10 + 48);
	putchar(j % 10 + 48);

	/**print comma and space if not the last combination*/
	if (i != 99 || j != 99)
{
	putchar(',');
	putchar(' ');
}
}
}

	return (0);
}
