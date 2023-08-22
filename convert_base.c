#include "main.h"

/**
* _itoa - converts integer according to number base
* @num: integer to convert
* @str: buffer
* @base: number base
* Return: character
*/

char *_itoa(int num, char *str, int base)
{
	int i = 0, flag = 0, rem;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (num < 0 && base == 10)
	{
		flag = 1;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}
	if (flag)
		str[i++] = '-';
	str[i] = '\0';
	reverse(str, i);
	return (str);
}
