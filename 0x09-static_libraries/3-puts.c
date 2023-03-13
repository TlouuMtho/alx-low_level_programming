#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string to be printed
 *
 * Return: the length of the string
 */
void _puts(char *s)
{
	int i = 0;

        while (s[i] != '\0')
        {
                _putchar(s[i]);
                i++;
        }
        _putchar('\n');
}
