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
	return (count);
}

/**
* prints_integer - prints integer value to standard output
*
* @arg: takes in the macro va_list argument
* Return: bytes of character
*/

int prints_integer(va_list arg)
{
	int len_bytes = 0;
	int value = va_arg(arg, int);
	int base;

	if (value == 0)
	{
		_putchar('0');
		len_bytes++;
		return (len_bytes);
	}
	if (value == INT_MIN)
	{
		char *int_eger = "-2147483648";
		int i;

		for (i = 0; int_eger[i] != '\0'; i++)
			len_bytes += _putchar(int_eger[i]);
		return (len_bytes);
	}
	if (value < 0)
	{
		_putchar('-');
		len_bytes++;
		value = -value;
	}
	base = 1;
	while ((value / base) >= 10)
		base *= 10;
	while (base != 0)
	{
		_putchar('0' + value / base);
		value %= base;
		base /= 10;
		len_bytes++;
	}
	return (len_bytes);
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
