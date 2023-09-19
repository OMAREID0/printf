#include "main.h"

/**
 * my_putchar - Print a single character to the standard output.
 * @c: The character to be printed.
 *
 * Return:
 * On success, returns the number of bytes written (1).
 * On error, returns -1 and sets errno accordingly.
 */
int my_putchar(char c)
{
	return (write(1, &c, 1));
}

