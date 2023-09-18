#include "main.h"


int handler(const char *format, list_t list[], va_list arg)
{
	int i, j, counter, value;

	counter = 0;

	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] == "%")
		{
			for (j = 0; list[j].spec != NULL ; j++)
			{
				if (format[i + 1] == list[j].spec[0])
				{
					value = list[j].fun(arg);
					if (value == -1)
						return (-1);
					counter += value;
					break;
				}
			}
			if (list[j].spec == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					my_putchar(format[i]);
					my_putchar(format[i + 1]);
					counter = counter + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			my_putchar(format[i]);
			counter++;
		}
	}
	return (counter);
}
