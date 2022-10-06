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
	if (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
