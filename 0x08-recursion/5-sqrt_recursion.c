#include "main.h"
int _sqrt_recursion(int n);
/**
 * _sqrt_recursion - a function that returns the square root of a number
 * @n: input number
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(1, n));
}

/**
 * sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root
 */

int sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (sqrt(prev + 1, root));
}
