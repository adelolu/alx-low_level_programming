#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: input number
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == c)
			return (1);
		else
			return (0);
	}
}
