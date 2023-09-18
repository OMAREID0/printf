#include "main.h"

/**
 * base_len - calculate the length of num when it is converted to another base.
 * @num: numer that the function will work on.
 * @base: base to be calculated on.
 *
 * Return:the length of the number whent it is converted.
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; ++i)
		num /= base;
	return (i);
}

/**
 * put_base - prints any pointer content.
 * @anything: content to print.
 */
void put_base(char *anything)
{
	unsigned int i;

	for (i = 0; anything; ++i)
		my_putchar(anything[i]);
}


