#include "main.h"

/**
 * _memcpy - Copies memory area
 * @n: amount of bytes to be copied
 * @src: memory area to copy bytes from
 * @dest: memory area to store copied bytes
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
