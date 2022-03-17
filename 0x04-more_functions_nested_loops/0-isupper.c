#include "main.h"

/**
 * _isupper - a function that checks for uppercase characters
 * @c: variable taht stores letters
 *
 * Return: 1 if its uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
