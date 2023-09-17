#include "main.h"

/**
 * print_decimal - function that print decimal number.
 * @arg: dectimal to print.
 *
 * Return: the amount of number printed.
 */
int print_decimal(int var_list)
{
	int count = 0;
	int remainder;
	int n;

	n = var_arg(arg, int)
	if (n < 0)
	{
		count += my_putchar('-');
		n = n * -1;
	}
	while (n != 0)
	{
		remainder = n % 10;
		count += my_putchar('0' + remainder);
		n /= 10;
	}
	return (count);
}

