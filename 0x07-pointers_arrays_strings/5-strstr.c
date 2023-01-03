#include "main.h"
/**
 * _strstr - locates
 * @haystack: string
 * @needle: substring
 * Return: located
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, str2;

	while (*hatstack != '\0')
	{
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
