#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be checked
 * @c: character to check in string
 * Return: a pointer to the first occurrence of the character c in the string s
 * if the character is not found, NULL
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
