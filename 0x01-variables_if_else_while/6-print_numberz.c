#include <stdio.h>

/**
 * main - print all single digit numbers
 *
 * print all single digit numbers
 *
 * Return: zero
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
