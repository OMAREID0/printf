#include "main.h"

/**
 * print_octal - print numbers in octal form
 * @arg: argument pass to function
 *
 * Return: length of octal
 */
int print_octal(va_list arg)
{
	unsigned int num;
	int len;
	char *octal;
	char *rev_str;

	num = va_arg(arg, unsigned int);

	if (num == 0)
		return (my_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal = malloc(sizeof(char) * len + 1);
	if (octal == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal[len] = (num % 8) + 48;
		num = num / 8;

	}
	octal[len] = '\0';
	rev_str = rev_string(octal);
	if (rev_str == NULL)
		return (-1);

	put_base(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}
