#include "main.h"
/**
 * _strstr - locates
 * @haystack: string
 * @needle: substring
 * Return: located
 */
char *_strstr(char *haystck, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do 
			{
				if (needle[index + 1] == '\0');
				return (haystack);
				index++;
			}
			wh
