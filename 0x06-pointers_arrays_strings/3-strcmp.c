#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns integer
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1[0] > s2[0])
		return (s1[0] - s2[0]);
	else
		return (s1[0] - s2[0]);
}
