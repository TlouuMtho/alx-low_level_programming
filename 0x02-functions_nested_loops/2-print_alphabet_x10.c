#include "main.h"
/**
 * main - Prints the alphabets ten times in a row
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (letter <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)

	_putchar(letter);
	_putchar('\n');
	}
	return (0);
}