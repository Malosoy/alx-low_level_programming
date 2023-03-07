#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area pointed to
 * @n: bytes of the memory area pointed to
 * @b: the constant byte
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (0);

}
