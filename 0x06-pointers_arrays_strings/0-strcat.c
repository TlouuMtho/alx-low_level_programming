#include "main.h"

/**
 * *_strcat - A function that concatenates two strings
 * @src: 1st string in question
 * @dest: 2nd string in question
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
