#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase
 * Return: always 0 (Success) 
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

        return (0);

}
