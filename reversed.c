#include "main.h"

/**
 * print_reversed - Print a reversed version of a string.
 * @arg: Argument containing the string to be reversed and printed
 *
 * @return: The number of characters printed or -1 on error.
 */
int print_reversed(va_list arg)
{
	int len;
	char *string;
	char *pointer;

	string = va_arg(arg, char *);
	if (string == NULL)
		return (-1);

	pointer = rev_string(string);

	if (pointer == NULL)
		return (-1);

	for (len = 0; pointer[len] != '\0'; len++)
	{
		my_putchar(pointer[len]);
	}

	free(pointer);
	return (len);
}
