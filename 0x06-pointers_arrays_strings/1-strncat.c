#include "main.h"
/**
 * _strnct - two string  using imput numberfrom sourse code
 * @dest: the string
 * @src: string
 * Return: result string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;
	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
