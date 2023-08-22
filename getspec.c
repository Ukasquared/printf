#include "main.h"
/**
* get_spec - get the function of the corresponding character
*
* @c: character
* Return: pointer to function
*/

int (*get_spec(char c))(va_list arg)
{
	conversion specifier[] = {
		{'i', prints_integer},
		{'c', prints_character},
		{'d', prints_integer},
		{'s', prints_string}
	};
	int i = 0;

	while (i < 4)
	{
		if (c == specifier[i].c)
			return (specifier[i].va_arg_func);
		i++;
	}
	return (NULL);
}
