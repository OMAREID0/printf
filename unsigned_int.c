#include "main.h"

/**
 * unsigned_integer - Print an unsigned integer.
 * @arg: Argument containing the unsigned integer to print.
 *
 * @Return: The number of characters printed.
 */
int unsigned_integer(va_list arg)
{
	int div;
	int len = 0;
	unsigned int num;

	num = va_arg(arg, unsigned int);
	if (num == 0)
	{
		len += my_putchar('0');
		return (len);
	}
	if (num < 1)
		return (-1);
	div = 1;
	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		len += my_putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
