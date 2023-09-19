#include "main.h"

/**
 * printf - Custom printf function.
 * @format: A format string containing format specifiers.
 * @...: Variable number of arguments corresponding to format specifiers.
 *
 * Return: The total number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	list_t list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_decimal},
		{"b", put_binary},
		{"o", print_octal},
		{"r", print_reversed},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
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
