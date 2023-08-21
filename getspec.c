#include "main.h"
/**
* get_spec - get the function of the corresponding character
* 
*@c: character
*
*/

void (*get_spec(char c))(va_list arg)
{
	conversion specifier[] = {
		{'c', prints_character},
		{'d', prints_integer},
		{'s', prints_string}
	};
	int i = 0;

	while (i < 3)
	{
		if (c == specifier[i].c)
			return (specifier[i].va_arg_func);
		i++;
	}
	return (0);
}
