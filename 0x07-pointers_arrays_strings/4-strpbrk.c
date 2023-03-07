#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: a pointer to the byte in s,
 * that matches one of the bytes in accept
 * if no such byte is found, NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
			return (s);
		}
	}
	s++;
	}
	return (0);
}
