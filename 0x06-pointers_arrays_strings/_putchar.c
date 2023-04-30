#include <unistd.h>

/**
 * _putchar - print the given character
 *
 * @c: charater to be printed
 *
 * Return: charater
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
