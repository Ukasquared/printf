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
	int len = 0;
	va_list string_z;
	char *ch, *start;

	va_start(string_z, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ch = (char *)format; *ch; ch++)
	{
		if (*ch != '%')
		{
			len += _putchar(*ch);
			continue;
		}
		start = ch;
		ch++;
		if (get_spec(ch))
			len += (get_fmt_func(ch, string_z));
		else
			len += print_from_to(start, ch);

	}
	va_end(string_z);
	return (len);
}
