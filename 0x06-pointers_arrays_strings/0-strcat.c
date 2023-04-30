#include "main.h"

/**
 * _strcat - concatenate two given strings
 *
 * @dest: the first string to be concatenate
 *
 * @src: the second string which will be append to the first one
 *
 * Return: concatened string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, count = 0;

	while (dest[i])
	{
		count += 1;
		i++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
