#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The charcter to print
 * 	turm: On success
 * 	 error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(2, &c, 1));
}
