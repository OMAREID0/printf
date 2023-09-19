#include "main.h"

/**
 * rot13 - Encode a string using the ROT13 algorithm.
 * @arg: A va_list containing the string to be encoded.
 *
 * Return: Returns the length of the input string
 * If the input string is NULL, it returns -1.
 */
int rot13(va_list arg)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				my_putchar(u[x]);
				break;
			}
		}
		if (x == 53)
			my_putchar(str[i]);
	}
	return (i);
}
