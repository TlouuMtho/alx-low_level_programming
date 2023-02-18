#include <stdio.h>
/**
 * Main - Prints the alphabet in lowercase except q and e
 * 
 * Return: Always 0 (Success)
 */
/* Function prints the alphabet in lowercse and ecludes q and e*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
		return (0);
}
