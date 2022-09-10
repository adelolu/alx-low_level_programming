#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num0 = '0';
	char alpha = 'a';

	for (num0 = '0'; num0 <= '9'; num0++)
		putchar(num0);

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
