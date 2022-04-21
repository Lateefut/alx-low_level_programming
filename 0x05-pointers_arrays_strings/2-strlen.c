#include "main.h"

/**
 * _strien - returns the lenght of a string
 *
 * @s: The String
 * Return: int
 */

int _stelen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\0')
		lenght++;

	return (lenght);
}
