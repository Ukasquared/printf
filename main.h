#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _strlen(char *);
int _strcmp(char *, char *);
int _printf(const char *format, ...);

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

typedef struct _printf conversion	

#endif
