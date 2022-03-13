#include <stdio.h>
/**
  * main - computes sizes of various data types
  *
  * return: zero
  */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %lu bytes\n", sizeof(c));
	printf("Size of a int: %lu bytes\n", sizeof(i));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of a float: %lu byte\n", sizeof(f));
	return (0);
}
