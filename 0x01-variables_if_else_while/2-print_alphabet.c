#include <stdio.h>

/**
* main - print the alphabet in lowercase, followed by a new line
*
* Description: using the main function
* this program prints "Prints the alphabet in lowercase"
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 97; i <= 122;  i++)
{
	putchar(i);
}
	putchar('\n');
	return (0);
}
