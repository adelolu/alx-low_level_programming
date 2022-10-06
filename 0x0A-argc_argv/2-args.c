#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: aguement length
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num = 0;

	while (num < argc)
	{
		printf("%s\n", *(argv + num));
		num++;
		(*argv)++;
	}
	return (0);
}
