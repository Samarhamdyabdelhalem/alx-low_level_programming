#include "main.h"

/**
 * print_sign - Prints the sign of the number
 * @n: The number to be checked
 * Return: 1 for positive num, -1 for the negative num or zero for AT else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
