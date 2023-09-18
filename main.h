#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

struct function_list
{
	char *spec;
	int (*fun)(va_list);
};
typedef struct function_list list_t;

int handler(const char *format, list_t list[], va_list arg);
int _printf(const char *format, ...);
int my_putchar(char);
int print_string(va_list list);
int print_percent(va_list list);
int print_char(va_list list);
int print_decimal(int var_list);
