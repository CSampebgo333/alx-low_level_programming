#include <unistd.h>

/**
 * _putchar - print the char charatar
 *
 * @c: charatar to be printed
 *
 * Return: 1 if success or -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
