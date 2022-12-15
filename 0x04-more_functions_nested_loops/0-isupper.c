#include "main.h"
/**
 *_isupper - function to check
 * @c: input
 * Return: use 0 or 1 for lower and upper case
 */
int _isupper(int c)
{

if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
