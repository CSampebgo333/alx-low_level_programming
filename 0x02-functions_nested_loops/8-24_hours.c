#include "main.h"

/**
 * void jack_bauer - print every minute of a day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(':');
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar('\n');
		}
	}
}
