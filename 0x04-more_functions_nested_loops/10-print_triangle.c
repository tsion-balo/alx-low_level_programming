#include "main.h"
/**
 * print_triangle - prints a triangle
 * @siza: size of the triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i , j;
		for (i = 0; i < size; i++)
		{
			_putchar(' ');

			for (j=0; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
