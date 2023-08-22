#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _strlen(char *);
int _strcmp(char *, char *);
int _printf(const char *format, ...);
int (*get_spec(char c))(va_list arg);
int prints_string(va_list arg);
int prints_character(va_list arg);
int prints_integer(va_list arg);
void reverse(char str[], int len);
char *_itoa(int num, char *str, int base);

/**
* struct _printf - converts according to conversio specifier
* @c: character
* @va_arg_func: function pointer
*/
struct _printf
{
	char c;
	int (*va_arg_func)(va_list);
};
/**
* conversion - modified struct print_f
*/
typedef struct _printf conversion;

#endif
