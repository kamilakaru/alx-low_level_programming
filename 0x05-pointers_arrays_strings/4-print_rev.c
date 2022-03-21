#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: input
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
