#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from string src
 * Return: return destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = strlen(dest);

	while (i < n)
	{
		dest[i + j] = src[i];
		i++;
	}
	return (dest);
}
