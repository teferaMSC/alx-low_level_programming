#include"main.h"
/**
 *_strcat: the string point to works for hts task which is not posible s
 * @dest: pointer
 * @src: sources
 * Return: destination
 */
char *strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
