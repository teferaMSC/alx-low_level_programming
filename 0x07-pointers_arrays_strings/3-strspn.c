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
			else if (accep[index + 1] == '\0')
				return(bytes);
		}
		s++;
	}
	return (bytes);
}
