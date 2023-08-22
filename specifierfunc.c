#include "main.h"

/**
* prints_string - prints integer value to standard output
*
* @arg: takes in the macro va_list argument
* Return: bytes of character
*/

int prints_string(va_list arg)
{
	int len_byte;
	char *value = va_arg(arg, char *);

	len_byte = _strlen(value) * sizeof(char);
	return (write(1, value, len_byte));
}

/**
* prints_character - prints integer value to standard output
*
* @arg: takes in the macro va_list argument
* Return: bytes of character
*/

int prints_character(va_list arg)
{
	char value = va_arg(arg, int);

	return (write(1, &value, sizeof(char)));
}

/**
* prints_integer - prints integer value to standard output
*
* @arg: takes in the macro va_list argument
* Return: bytes of character
*/

int prints_integer(va_list arg)
{
	char str[100];
	int len_bytes;
	int value = va_arg(arg, int);
	char *string_int = _itoa(value, str, 10);

	len_bytes = _strlen(string_int);
	return (write(1, string_int, len_bytes));
}
