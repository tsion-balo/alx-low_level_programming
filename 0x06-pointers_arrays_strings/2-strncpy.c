#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of charachters to be copied
 * Return: returns destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
