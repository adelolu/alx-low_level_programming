#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input string
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0, a = 0;

	while (str[i] != '\0')
		i++;

	i -= 1;

	for (; a <= i; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
