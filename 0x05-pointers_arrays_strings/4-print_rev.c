#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 * @s: input charater
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] == '\0')
		len++;

	for (len = len - 1; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
