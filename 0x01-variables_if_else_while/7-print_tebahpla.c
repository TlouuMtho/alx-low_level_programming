#include <stdio.h>
/**
 * main - Entry point
 *
 * Prints the alphabet inreverse order
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');
	return (0);
}
