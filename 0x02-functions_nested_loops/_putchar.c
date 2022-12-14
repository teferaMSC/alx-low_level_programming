#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
  * @c: The character to print
  */
int _putchar()
{
	char *sh = "Holberton";
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
