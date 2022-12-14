#include "main.h"
/**
 * _isalpha - to check the xharcter
 * @c: checked x
 * return: 1 for character or 0 for else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c <= 97 && c <= 122))
			{
			return (1);
			}
			return (0);
			}
