#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _strlen(char *);
int _strcmp(char *, char *);
int _printf(const char *format, ...);
void (*get_spec(char c))(va_list arg);
void prints_string(va_list arg);
void prints_character(va_list arg);
void prints_integer(va_list arg);

/**
* struct _printf - converts according to conversio specifier
* @c: character
* @va_arg_func: function pointer
*/
struct _printf {
	char c;
	void (*va_arg_func)(va_list);
};

/**
* conversion - modified struct print_f
*/

typedef struct _printf conversion;

#endif
