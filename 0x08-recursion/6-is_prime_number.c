#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number -  returns 1 if the integer is prime, else return 0
 *
 * @n: The number to be checked
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, n - 1));
	}
}

/**
 * actual_prime - return 1 if n is prime number else if return 0
 *
 * @n: The number to be checked
 *
 * @i: iterator
 *
 * Return: 1 if success or 0 if failed
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, i - 1));
	}
}
