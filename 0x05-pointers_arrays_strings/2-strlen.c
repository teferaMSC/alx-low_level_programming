#include "main.h"
/**
 * _puts - prints  and  a new line
 * @str: to print string
 */
void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str++);
}
_putchar('\n');
}
