#include "main.h"

/**
 * leet - encodes a string into 1337
 * @let: string to be looping and so encode
 *
 * Return:encoded string
 */
char *leet(char *let)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; let[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (let[i] == a[j])
			{
				let[i] = b[j];
			}
		}
	}
	return (let);
}
