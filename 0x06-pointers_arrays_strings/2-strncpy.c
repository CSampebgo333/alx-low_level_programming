#include "main.h"
#include <stddef.h>

/**
 * _strncpy - copie a string
 *
 * @dest: the string to be complet
 *
 * @src: the string to be copied
 *
 * @n: numbre of character to be appended
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, count = 0;

	while (src[i] && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
		count += 1;
	}

	if (src[count] == '\0')
	{
		dest[count] = '\0';
	}
	return (dest);
}

