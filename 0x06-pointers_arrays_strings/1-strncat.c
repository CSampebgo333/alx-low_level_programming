#include "main.h"

/**
 * _strncat - concatenate two strings without null at the end
 *
 * @dest: the first string to be concatenated
 *
 * @src: the second strind to be concatenated by appending it ti the first one
 *
 * @n: number of bytes for src string
 *
 * Return: the concatenated string assenbly
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, count = 0;

	while (dest[i])
	{
		count += 1;
		i++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count] = src[i];
			count++;
	}
	return (dest);
}
