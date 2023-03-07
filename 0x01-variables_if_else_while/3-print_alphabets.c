#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
*
* Description: using the main function
* this program prints the alphabet in lowercase, and then in uppercase
* Return: 0
*/
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/**print alphabet in lowercase*/
	while (lowercase <= 'z')
{
	putchar(lowercase);
	lowercase++;
}

	/**print alphabet in uppercase*/
	while (uppercase <= 'Z')
{
	putchar(uppercase);
	uppercase++;
}

	/**print newline character*/
	putchar('\n');

	return (0);
}

