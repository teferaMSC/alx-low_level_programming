#include"main.h"
/**
 * 0-isupper.c - function 
 * @c: input
 * Return: use 0 or 1 for lower and upper case
 */
int -isupper(int c)
{
	char uppercase = 'A';
	int isupper = 'a';

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
