#include"main.h"
#include <unistd.h>
/**
 * _putchar - character c
 * @c: to print
 * Return: succ 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
