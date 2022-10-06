#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument length
 * @argv: argument values
 * Return: 0
 * * 1 if number of arguments is not equal t0 2
 */

int main(int argc, char **argv)
{
	int amount, cents = 0;
	int value[5] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		amount = atoi(argv[1]);

		if (amount <= 0)
		{
			printf("0\n");
		}
		for (j = 0; j < 5; j++)
		{
			if (value[i] <= amount)
			{
				cents = cents + (amount / value[i]);
				amount = amount + (amount % value[i]);
				if (amount == 0)
				{
					printf("%d\n", cents);
					break;
				}
			}
		}
	}
	else 
	{
		printf("Error\n");
		return (1);
	}
}
