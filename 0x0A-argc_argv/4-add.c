#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers
 * @argc: argument length
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, i, reusult = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i] != '0\'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
