#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  a function that concatenates all the arguments
 * @ac: length of arguments
 * @av: arguments value
 * Return: point to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *newstring;

	if (ac == 0)
		return (NULL);
	for (i = j = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (l = 0; av[i][l] != '\0'; l++)
			j++;
		j++;
	}
	newstring = malloc((j + 1) * sizeof(char));

	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}

	for (i = l = k = 0; k < j; l++, k++)
	{
		if (av[i][l] == '\0')
		{
			newstring[k] = '\n';
			i++;
			k++;
			l = 0;
		}
		if (k < j - 1)
			newstring[k] = av[i][l];
	}
	newstring[k] = '\0';

	return (newstring);
