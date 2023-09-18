#include "main.h"

/**
 * _printf - function to print whatever write in
 * @format: array of string to print it on the screen
 *
 * Return: return number of printed charchters (counter)
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	list_t list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_decimal},
		{NULL, NULL}
	};
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	printed_chars = handler(format, list, arg);
	va_end(arg);
	return (printed_chars);
}
