#include "main.h"
/**
 *print_rev - impriment
 *@s: string hgh
*Return:
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
