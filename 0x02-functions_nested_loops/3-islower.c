#include <ctype.h>
/**
 * is_lower - checkes if a character is lowercase or not
 * Return: returns 1 if lower 0 uppercase
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
