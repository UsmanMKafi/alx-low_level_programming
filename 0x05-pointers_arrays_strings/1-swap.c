#include "main.h"

/**
 * swap_int - a function that swap the
 * values of two integers
 * @a: int type pointer input
 * @b: int type pointer input
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int boo;

	boo = *a;
	*a = *b;
	*b = boo;
}

