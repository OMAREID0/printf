#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct function_list - A structure to hold function pointers and their spec
 * @spec: A pointer to a character string describing the function's speci
 * @fun: A pointer to a function that takes a va_list as argument and retur
 */
struct function_list
{
	char *spec;
	int (*fun)(va_list);
};
typedef struct function_list list_t;

/**
 * main functions to handel specifers
 */
int handler(const char *format, list_t list[], va_list arg);
int _printf(const char *format, ...);
int my_putchar(char);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_char(va_list arg);
int print_decimal(va_list arg);
int put_binary(va_list arg);
int print_octal(va_list arg);
int unsigned_integer(va_list arg);
int print_reversed(va_list arg);
int print_heX(va_list arg);
int print_hex(va_list arg);
int rot13(va_list arg);
/**
 * helper functions
 */
int hex_check(int num, char x);
char *rev_string(char *s);
unsigned int base_len(unsigned int num, int base);
void put_base(char *anything);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
