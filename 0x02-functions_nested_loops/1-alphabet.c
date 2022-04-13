#include "main.h"
/**
 *
 * main - Entry point 
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefhghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
