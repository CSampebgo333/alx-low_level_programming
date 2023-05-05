#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @rot: the string to be encoding
 *
 * Return: the encoded string
 */
char *rot13(char *rot)
{
	int i, j;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *n = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; rot[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (rot[i] == a[j])
			{
				rot[i] = n[j];
			}
		}
	}
	return (rot);
}
