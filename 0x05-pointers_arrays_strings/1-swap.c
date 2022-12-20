#include <stdio.h>
#include <unistd.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: to swap
 * @b: to swap
 */
void swap_int(int *a, int *b);
{
	int m;

	m = a;
	*a = *b;
	*b = m;
}
