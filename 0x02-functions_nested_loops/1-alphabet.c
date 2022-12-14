#include <stdio.h>
int _putchar(char);
/**
 * print_alphabet - prints the alphabet from a to z
 * Return: returns 0 sucess
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');

	return;

}
