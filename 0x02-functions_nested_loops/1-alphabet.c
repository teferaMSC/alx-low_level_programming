#include "main.h"
/**
 * main - to print alphabate 
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
