#include "main.h"
#include <stddef.h>

/**
 * _strncpy - copie a string
 * @dest: the string to be complet
 * @src: the string to be copied
 * @n: numbre of character to be appended
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
