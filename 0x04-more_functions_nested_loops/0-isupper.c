#include "main.h"
#include <ctype.h>
/**
 * _isupper - checkes if a character is uppercase
 * Return: returns 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
