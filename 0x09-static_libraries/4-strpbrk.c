#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string first occurrence
 * @accept: string
 *
 * Return: a pointer to the byte s or @NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
