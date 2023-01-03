#include "main.h"
/**
 * _strspn - gets
 * @s: string
 * @accept: prefix
 * Return: number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			s++;
		}
			return (bytes);
		}
