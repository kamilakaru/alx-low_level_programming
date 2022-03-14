#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * print the letters pf the alphabet in lower the uppercase
 *
 * Return: zero
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
