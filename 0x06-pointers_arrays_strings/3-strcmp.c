#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: The string to be compared
 * @s2: The string which will be using to compare the first one
 *
 * Return: -15 if s1 < s2 or 0 if they are equal or 15 else
 */
int _strcmp(char *s1, char *s2)
{
	int i, i_s1 = 0, i_s2 = 0;

	for (i = 0; s1[i]; i++)
	{
		i_s1 += 1;
	}

	for (i = 0; s2[i]; i++)
	{
		i_s2 += 1;
	}

	if (i_s1 < i_s2)
	{
		return (-15);
	}
	else if (i_s1 == i_s2)
	{
		return (0);
	}
	else
	{
		return (15);
	}
}
