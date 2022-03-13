#include <stdio.h>

/**
 * main - print the letters of alphabet
 *
 * print the letters of alphabet
 *
 * Return: zero
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{	
		putchar (i);
		i++;
	}
	putchar(10);

	return (0);
}
