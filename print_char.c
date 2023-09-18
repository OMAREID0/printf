#include "main.h"

/**
 * print char - print character gaven from list
 * Return: (1)
 */
int print_char(va_list arg)
{
	my_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_string - function to print string
 * Return: number of char printed
 */
int print_string(va_list arg)
{
	int i;
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
		my_putchar(string[i]);

	return (i);
}

/**
 * print_persent function to print (%)
 * Return: (1)
 */
int print_percent(__attribute__((unused))va_list arg)
{
	my_putchar('%');
	return (1);
}
