#include "main.h"

/**
 * main - print letters of alphabet
 *
 * Description: print alphabet in lowercase
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
