#include "main.h"

/**
 * actual_sqrt_recursion - Calculate actual  square
 *
 * @n: number to be squared
 *
 * @i: indicator
 *
 * Return: square root
 */
int actualint_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (actualint_sqrt_recursion(n, i + 1));
	}
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: number to be squared
 *
 * Return: the square of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actualint_sqrt_recursion(n, 0));
	}

}
