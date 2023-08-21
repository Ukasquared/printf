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
	int i = 0; found = 0;
	va_list string_z;
	va_start(string_z, format);
	while(format[i] != '\0' && format != NULL)
	{
		char c = format[i];
		if (c != '%')
			write(1, &c, sizeof(char));
		else if (c == '%')
		{
			found = 1;
			continue;
		}
		if (found == 1 && c == '%')
			write(1, &c, sizeof(char));
		else if (found == 1 && get_spec(c))
			(*get_spec(c))(string_z);
		found = 0;
		i++;
	}
	i--;
	return (i);
}
