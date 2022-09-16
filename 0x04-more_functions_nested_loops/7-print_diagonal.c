#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 * @n: input number
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(98);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
