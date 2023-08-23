#include "main.h"

/**
* prints_string - prints integer value to standard output
*
* @arg: takes in the macro va_list argument
* Return: bytes of character
*/


int prints_string(va_list arg)
{
	char *string = va_arg(arg, char *);
	int len = 0, i;

	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
	{
		len += _putchar(string[i]);
	}

	return (len);
}

/**
* prints_character - prints integer value to standard output
*
* @arg: takes in the macro va_list argument
* Return: bytes of character
*/

int prints_character(va_list arg)
{
	int value = va_arg(arg, int);
	int count = 0;

	count += _putchar(value);
	return (0);
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


/**
 * prints_percent - Prints percentage sign
 * @arg: Pointer variable
 * Return: Number of byte
 *
 */

int prints_percent(va_list arg)
{
	(void)arg;
	return (_putchar('%'));
}

/**
 * print_from_to - pritns from beginning to va_end
 * @start: starting Point
 * @stop: Finish online
 * Return: Number of bytes
 */

int print_from_to(char *start, char *stop)
{	int len = 0;

	while (start <= stop)
	{	len += _putchar(*start);
		start++;
	}

	return (len);

}


