#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: The String
 * Return: int
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\0')
		lenght++;

	return (lenght);
}
