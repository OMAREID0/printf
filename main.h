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

int handler(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int my_putchar(char);

