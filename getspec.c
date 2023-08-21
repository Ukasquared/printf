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
		{'%', print_percent},
		{'c', print_character},
		{'d', print_integer},
		{'s', print_string}
	};
	int i = 0;

	while (i < 4)
	{
		if (c == specifier[i].c)
			return (specifier[i].f);
		i++;
	}
}
