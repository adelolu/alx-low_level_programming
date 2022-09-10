#include <stdio.h>

/**
 * main - entry point
 * Return: alway returns 0
 */
int main(void)
{
	int num;

	for  (num = 10; num < 20; num++)
	{
		putchar((num % 10) + '0');
		if (num != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
