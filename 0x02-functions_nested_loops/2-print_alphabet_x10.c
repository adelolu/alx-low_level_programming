#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabetin lowercase
 * Return 0
 */

void print_alphabet_x10(void)
{
	char i;
	int num;

	for (num = 0; num <= 10; num++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n')
	}
}
