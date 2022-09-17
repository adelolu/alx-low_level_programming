#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: input number
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	int num;
	int output = 0;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == c)
		{
			output = 1;
			break;
		}
	}
	return (output);
}
