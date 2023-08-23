#include "main.h"
/**
* get_spec - get the function of the corresponding character
*
* @c: character
* Return: pointer to function
*/

int (*get_spec(char *c))(va_list arg)
{
	conversion specifier[] = {
		{"i", prints_integer},
		{"c", prints_character},
		{"d", prints_integer},
		{"s", prints_string},
		{"%", prints_percent},
		{NULL, NULL}
	};
	int i = 0;

	while (specifier[i].c)
	{
		if (*c == specifier[i].c[0])
			return (specifier[i].va_arg_func);
		i++;
	}
	return (NULL);

}
/**
 * get_fmt_func - Accesses pointer function by specifier
 * @arg: Argument pointer
 * @s: Character
 * Return: Number of bytes
 */

int get_fmt_func(char *s, va_list arg)
{
	int (*f)(va_list) = get_spec(s);

	if (f)
		return (f(arg));
	return (0);
}
