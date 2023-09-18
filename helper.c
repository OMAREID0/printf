#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The input string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

/**
 * base_len - calculate the length of num when it is converted to another base.
 * @num: numer that the function will work on.
 * @base: base to be calculated on.
 *
 * Return:the length of the number whent it is converted.
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; ++i)
		num /= base;
	return (i);
}

/**
 * put_base - prints any pointer content.
 * @anything: content to print.
 */
void put_base(char *anything)
{
	unsigned int i;

	for (i = 0; anything; ++i)
		my_putchar(anything[i]);
}

