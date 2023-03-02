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
	char *str1[] = "dest";
	char *str2[] = "src";
	char result[8];

	concatenate_strings(str1, str2, result);

	_putchar("Concatenated string is: %s\n", result);

	return (*str1[]);
}
