#include <unistd.h>

/**
 * _putchar - this writes character c to stdout
 * @c: character is to print
 *
 * Return:On success 1.
 * On error, -1 is to be returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
