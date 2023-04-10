#include "main.h"

int check_pal(char *s, int i, int len);
int char_length(char *s);

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 *
 * @s: The string to be checked
 *
 * Return: 1 if it is palindrome or 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (check_pal(s, 0, char_length(s)));
	}
}

/**
 * char_length - Find the length of the string
 *
 * @s: string to calculate the length of
 *
 * Return: the length of the thring
 */
int char_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + char_length(s + 1));
	}
}

/**
 * check_pal - checks the string
 *
 * @s: string to be checked
 *
 * @i: iterator
 *
 * @len: length of the string
 *
 * Return: 1 if the string is palindrome and 0 if it is not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	else
	{
		return (check_pal(s, i + 1, len - 1));
	}
}
