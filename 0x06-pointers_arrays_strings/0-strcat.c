#include"main.h"
/**
 * stca: string point works for this task which is not posible short we hae ber
 * @dest: pointer
 * @src: sources
 * Return: destination
 */
char *stca(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
