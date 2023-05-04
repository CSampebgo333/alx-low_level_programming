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
	int i = 0;

	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
		i++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
