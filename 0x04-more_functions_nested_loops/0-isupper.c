#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: argument for the function _isupper
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	int i = 'A';

	for (; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
			return (0);
	}
}
