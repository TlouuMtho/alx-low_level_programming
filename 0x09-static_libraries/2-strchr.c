#include "main.h"
#include <stddef.h>
/**
 * _strchr - A function that locates a character in a string
 * @c: character
 * @s: string
 *
 * Return: a pointer to the first occurance of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
		return (s);
	}
		if (c == '\0')
		return (s);
		return (NULL);
}
