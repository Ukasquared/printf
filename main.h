#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _strlen(char *);
int _strcmp(char *, char *);
int _printf(const char *format, ...);
int (*get_spec(char *c))(va_list arg);
int prints_string(va_list arg);
int prints_character(va_list arg);
int prints_integer(va_list arg);
void reverse(char str[], int len);
char *_itoa(int num, char *str, int base);
int get_fmt_func(char *s, va_list arg);
int _putchar(char c);
int print_from_to(char *start, char *stop);
int prints_percent(va_list arg);

/**
* struct _printf - converts according to conversio specifier
* @c: character
* @va_arg_func: function pointer
*/
struct _printf
{
	char *c;
	int (*va_arg_func)(va_list);
};
/**
* conversion - modified struct print_f
*/
typedef struct _printf conversion;

#endif
