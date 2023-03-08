#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to print
 * Return: ALways 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
