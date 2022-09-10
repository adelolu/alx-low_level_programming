#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z';)
	{
		if (alpha == 'q')
			alpha++;
		else if (alpha == 'e')
			alpha++;
		else
		{
			putchar(alpha);
			alpha++;
		}
	}

	putchar('\n');
	return (0);
}
