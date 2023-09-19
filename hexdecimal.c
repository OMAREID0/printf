#include "main.h"

/**
 * print_hex - Prints a representation of a decimal number on base16 lowercase
 * @arg: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_hex(va_list arg)
{
	unsigned int num;
	int len = 0;
	int rem_num;
	char hex_rep[20];
	char *rev_hex;

	num = va_arg(arg, unsigned int);
	if (num == 0)
		return (my_putchar('0'));
	if (num < 1)
		return (-1);

	while (num > 0)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		len++;
		num /= 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(rev_hex);
	return (len);
}
/**
 * print_heX - Prints a representation of a decimal number on base16 lowercase
 * @arg: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_heX(va_list arg)
{
	unsigned int num;
	int len = 0;
	int rem_num;
	char hex_rep[20];
	char *rev_hex;

	num = va_arg(arg, unsigned int);
	if (num == 0)
		return (my_putchar('0'));
	if (num < 1)
		return (-1);

	while (num > 0)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		len++;
		num /= 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num -= 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
}

