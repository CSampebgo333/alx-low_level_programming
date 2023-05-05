#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: The capitalized string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char c[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				for (j = 0; c[j]; j++)
				{
					if (str[i - 1] == c[j])
					{
						str[i] = str[i] - 32;
					}

					if (str[i - 1] == '\t')
					{
						str[i - 1] = ' ';
						str[i] = str[i] - 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
