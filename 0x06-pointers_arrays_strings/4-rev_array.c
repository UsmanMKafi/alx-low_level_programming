#include "main.h"

/**
 * reverse_array - a function to reverse an array
 * @a: an array of integers
 * @n: number of elements of an array
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	n = n - 1;

	for (; i < n; i++; n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}

}
