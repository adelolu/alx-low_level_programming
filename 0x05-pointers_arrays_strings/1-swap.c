#include "main.h"

/**
 * swap-int - a function that swaps the values of two integers.
 * @a: input value
 * @b: input value
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
