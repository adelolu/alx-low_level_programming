#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer of char
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[i] != '\0'; j++)
		;

	s = malloc(sizeof(*s) * (i + j + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	for (l = 0; l <= j; k++, l++)
		s[k] = s2[l];
	return (s);
}
