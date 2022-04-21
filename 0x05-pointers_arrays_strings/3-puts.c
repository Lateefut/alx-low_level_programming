#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: The String
 * Return: string
 */

void _puts(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		_putchar(*(str + lenght));
		lenght++;
	}
	_putchar('\n');
}
