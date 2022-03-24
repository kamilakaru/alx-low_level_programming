#include "main.h"

/**
 * reverse_array - reverse the content of array of integers
 * @a: input
 * @n: input
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		n--;
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
