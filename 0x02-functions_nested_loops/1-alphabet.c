#include "main.h"

/**
 * print_alphabet in lowercase
 *
 * Description: print alphabet in lowercase
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
