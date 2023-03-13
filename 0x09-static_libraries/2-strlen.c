#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: char to be checked
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
