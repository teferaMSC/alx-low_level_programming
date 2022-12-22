#include"main.h"
#include"unistd.h"
/**
 * _putchar - write character c
 * @c: to print character
 *
 * Return: on success 1.
 * on errer, -1 is req.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
