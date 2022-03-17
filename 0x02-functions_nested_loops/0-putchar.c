#include "main.h"

/**
 * main - entry point
 * Disvription: print string
 *
 * Return: always 0.
 */

int main(void)
{
	char *s = "_putchar";

	while (*s != '\0')
	{
		_putchar (*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
