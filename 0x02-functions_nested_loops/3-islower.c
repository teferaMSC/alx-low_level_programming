#include "main.h"
/**
 *_islower - a function that checks for lowercase character
 *@c: single letter input
 *descripution: character tocheck the case
 * Return: Always 0 (Success)
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int test_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
