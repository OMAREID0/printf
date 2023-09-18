#include "main.h"

/**
 * print_decimal - function that print decimal number.
 * @arg: dectimal to print.
 *
 * Return: the amount of number printed.
 */
int print_decimal(va_list arg)
{
	int count = 0;
	int div = 1;
	int n;

	n = va_arg(arg, int);
	if (n < 0)
	{
		count += my_putchar('-');
		n = n * -1;
	}
	while (n / div > 9)
	{
		div *= 10;
	}
	while (div != 0)
	{
		count += my_putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
	return (count);
}
