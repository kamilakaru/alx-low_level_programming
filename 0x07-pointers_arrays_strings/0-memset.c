#include "main.h"
/**
 * _memset - fills memory with a constant  byte
 * @s: input
 * @b: input
 * @n: input
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*DELACRING FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/
	} /*END FOR*/

	return (s);
}
