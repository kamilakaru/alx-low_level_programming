#include <stdio.h>

/**
 * main - print the letters of alphabet
 *
 * print the letters of alphabet in reverse
 *
 * Return: zero
 */

int main(void)
{
	int i;

	i = 122;

	while (i > 96)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
