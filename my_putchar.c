#include "main.h"

/**
 * my_putchar - function that print char to stdout
 * @c: the character to print.
 *
 * Return: on success one
 */
int my_putchar(char c)
{
	return (write(1, &c, 1));
}

