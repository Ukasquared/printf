#include "main.h"

/**
* prints_string - prints integer value to standard output
*
* @arg: takes in the macro va_list argument
*/

void prints_string(va_list arg)
{
	int len_byte;
	char *value = va_arg(arg, char *);
	len_byte = _strlen(value) * sizeof(char);
	write(1, &value, len_byte);
}

/**
* prints_character - prints integer value to standard output
*
* @arg: takes in the macro va_list argument
*/

void prints_character(va_list arg)
{
	char value = va_arg(arg, char);
	write(1, &value, sizeof(char));
}

/**
* prints_integer - prints integer value to standard output
*
* @arg: takes in the macro va_list argument
*/

void prints_integer(va_list arg)
{
	int value = va_arg(arg, int);
	write(1, &value, sizeof(int));
}
