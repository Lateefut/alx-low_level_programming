#include "main.h"

/**
 * _memset - Functions that fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: constan value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	/*Declaring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
