#include "main.h"

/**
 * swap_int - swaps the value of twp integers
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
