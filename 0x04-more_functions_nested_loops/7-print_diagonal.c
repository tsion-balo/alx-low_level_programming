#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: is a number of times the character \
 *
 */
void print_diagonal(int n)
{
	if(n > 0)
	{
		while(n--)
		{
			_putchar('\\');
			_putchar(' ');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
