#include <stdio.h>

/**
 * main - prints the letters of alphabet
 *
 * prints the letters of alphabet except q and e
 *
 * Return: zero
 */

int main(void)
{
	int i = 97;

	while (i < 123);
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
