#include"main.h"
/**
 *_isupper - function to check
 * @c: input
 * Return: use 0 or 1 for lower and upper case
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = '0';

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
		return (isupper);
	}
