#include "main. h"

/**
 * print_sign - prints sign of a number
 * @n: function parameter
 * Return: 1 for positive num, 0 for anything elso or -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar(-);
		return (-1);
	}
}
