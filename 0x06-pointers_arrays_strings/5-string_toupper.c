#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @let: letter to be changed
 *
 * Return: The changed letter
 */
char *string_toupper(char *let)
{
	int i;

	for (i = 0; let[i]; i++)
	{
		if (let[i] >= 'a' && let[i] <= 'z')
		{
			let[i] = let[i] - 32;
		}
	}
	return (let);
}
