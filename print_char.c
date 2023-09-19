#include "main.h"

/**
 * print_char - Print a character.
 * @arg: A va_list containing the character to be printed.
 *
 * Return: Always returns 1 after successfully printing a character.
 */
int print_char(va_list arg)
{
	my_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_string - Print a string.
 * @arg: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed (excluding the null terminator).
 */
int print_string(va_list arg)
{
	int i;
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
	{
		my_putchar(string[i]);
	}
	return (i);
}

/**
 * print_percent - Print a percent symbol ("%").
 * @arg: A va_list (unused in this function).
 *
 * Return: Always returns 1 after successfully printing a percent symbol.
 */
int print_percent(__attribute__((unused))va_list arg)
{
	my_putchar('%');
	return (1);
}
