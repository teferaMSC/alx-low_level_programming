#include "main.h"
/**
 * _memset - fill first bytes
 * @s: a pointer memory
 * @c: charcter
 * @n: number
 * description _memset: there
 * Return: a pointer
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;
	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
