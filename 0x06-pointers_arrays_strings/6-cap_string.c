#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: The capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char c[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == c[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}

			if (str[i] == '\t')
			{
				str[i] = ' ';
			}
		}
	}
	return (str);
}
