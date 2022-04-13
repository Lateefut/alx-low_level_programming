#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		d = (d * -1);
	}
	_putchar(d + '0');
	return (d);
}
