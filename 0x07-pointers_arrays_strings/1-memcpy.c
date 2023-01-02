#include"main.h"
/**
 * _memcpy - copy
 * @dest: a pointer
 * @src: source
 * @n: the number
 * Return: result
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
	destination[index] = source[index];
	return (dest);
}
