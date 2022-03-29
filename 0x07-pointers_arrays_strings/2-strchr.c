#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: input
 * @c: input
 * Return: pointers to the occurence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
