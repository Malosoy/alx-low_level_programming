#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
		if (s[a] == accept[b])
		{
			n++;
			break;
		}
		}
		if (accept[b] == '\0')
		{
			break;
		}
	}
	return (n);
}
