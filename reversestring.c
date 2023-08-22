#include "main.h"
/**
* reverse - reverse the string
*
* @str: takes an array of characters
* @len: length of string
*/

void reverse(char str[], int len)
{
	int start = 0;
	int end = len - 1;
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}
