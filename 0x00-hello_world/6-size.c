#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print("Size of a char: %lu byet(s)\n", sizeof(char));
	print("Size of a int: %lu byet(s)\n", sizeof(int));
	print("Size of a long int: %lu byet(s)\n", sizeof(long int));
	print("Size of a long long int: %lu byet(s)\n", sizeof(long long int));
	print("Size of a float: %lu byet(s)\n", sizeof(float));
	return (0);
}
