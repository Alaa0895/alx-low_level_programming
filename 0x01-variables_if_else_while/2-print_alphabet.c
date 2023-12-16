#include <stdio.h>
/**
 * main - Entry point, print alphabets in lowercase a-z
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
