#include "main.h"
#include<unistd.h>
/**
 * _putchar - write character c
 * @c: to print character 
 * Return: at a time of success 1, errer -1, other 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
