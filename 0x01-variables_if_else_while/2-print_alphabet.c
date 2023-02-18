#include <stdio.h>

/**
 * main - prints lower and uppercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s = 97, e = 122;

	while (s <= e)
	{
		putchar(s);
		s++;
	}

	putchar('\n');

	return (0);
}
