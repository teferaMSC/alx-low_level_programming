#include "main.h"
/**
 * _strncpy - this is not clear for me i don't now what happen in this c tutorial and et
 * @dest: buffer 
 * @src: source
 * @n: number
 * Return: returns
 */
char *_strncpy(char *dest,char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
