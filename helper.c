#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The input string to be reversed.
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
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
    return i;
}

/**
 * put_base - prints any pointer content.
 * @anything: content to print.
 */
void put_base(char *anything)
{
    unsigned int i;

    for (i = 0; anything[i] != '\0'; ++i)
        my_putchar(anything[i]);
}

int put_binary(va_list arg)
{
    unsigned int n;
    int i, len;
    char *ptr;

    n = va_arg(arg, unsigned int);
    if (n == 0)
        return my_putchar('0');
    if (n < 1)
        return -1;
    len = base_len(n, 2);
    ptr = (char *)malloc(len + 1);
    if (ptr == NULL)
        return -1;
    for (i = 0; n > 0; ++i)
    {
        if (n % 2 == 0)
            ptr[i] = '0';
        else
            ptr[i] = '1';
        n /= 2;
    }
    ptr[i] = '\0';
    rev_string(ptr);
    put_base(ptr);
    free(ptr);
    return len;
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
