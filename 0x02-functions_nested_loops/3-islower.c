#include "main.h"
/**
 *_islower - a function that checks for lowercase character
 *@c: single letter input
 *descripution: character tocheck the case
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
