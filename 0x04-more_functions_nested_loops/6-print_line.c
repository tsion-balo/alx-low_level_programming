#include "main.h"
/**
 * print_line - draws a straight line
 * @n: is number of times _ displayed
 */
void print_line(int n)
{
	if (n >= 0)
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
