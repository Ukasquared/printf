#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A simplified version of the printf function
 * @format: The format string
 * @...: The optional arguments to be formatted
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            // If not a '%', print the character
            count += write(1, format, 1);
        }
        else
        {
            format++; // Move past '%'

            // Handle conversion specifiers
            switch (*format)
            {
                case 'c':
                    count += write(1, &va_arg(args, int), 1);
                    break;
                case 's':
                {
                    char *str = va_arg(args, char *);
                    while (*str)
                    {
                        count += write(1, str, 1);
                        str++;
                    }
                    break;
                }
                case '%':
                    count += write(1, "%", 1);
                    break;
                default:
                    count += write(1, "%", 1);
                    count += write(1, format, 1);
                    break;
            }
        }

        format++; // Move to the next character in the format string
    }

    va_end(args);

    return count;
}

