#include "main.h"

/**
 * reverse_array - revrese the content of the number's array
 * @a: pointer to the arrays which will be reversed
 * @n: number of number in the arrays
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
