#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @n: The number to be treated
* Return: Value of the last digit of number
*/

int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (i < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
