#include "main.h"

/**
 * _memset - A funtion that fills a memory with a constant byte
 * @s: memory area pointer
 * @b: constant byte
 * @n: memory area s bytes
 *
 * Return: a pointer to pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
