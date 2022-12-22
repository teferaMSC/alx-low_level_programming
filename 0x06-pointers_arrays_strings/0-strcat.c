#include"main.h"
/**
 * strcat: string point
 * @dest: pointer
 * @src: sources
 * Return: destination
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;
	while (dest[index++]) dest_len++;
	for (index = 0;src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
