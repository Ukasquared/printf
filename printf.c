#include "main.h"
/**
* _printf - function that produce output
* according to format
* @format: array of characters
* @...: elipses signifying unlimited inputs
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int len = 0, found = 0, percent = 0;
	va_list string_z;

	va_start(string_z, format);
	while (*format != '\0' && format != NULL)
	{
		len++;
		if (*format == '%')
		{
			percent = 1;
			format++;
			found = 1;
			if (found == 1 && get_spec(*format))
			{
				(get_spec(*format))(string_z);
				found = 0;
			}
			else if (percent == 1 && *format == '%')
			{
				write(1, format, sizeof(char));
				percent = 0;
			}
		}
		else
			write(1, format, sizeof(char));
		format++;
	}
	va_end(string_z);
	return (len);
}
