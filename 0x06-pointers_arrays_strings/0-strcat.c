#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 */
char *_strcat(char *dest, char *src)
{
	int j = strlen(dest);

	int i = 0, l = 1;

	dest[i + j] = ' ';

	while (src[i] != '\0')
	{
		dest[l + j] = src[i];
		i++;
		l++;
	}

	dest[l + j] = '\0';

	return (dest);
}
