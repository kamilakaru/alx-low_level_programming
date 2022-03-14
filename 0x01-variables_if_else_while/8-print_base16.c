#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: zero
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; 0 < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar (letter);
	putchar('\n');

	return (0);
}
