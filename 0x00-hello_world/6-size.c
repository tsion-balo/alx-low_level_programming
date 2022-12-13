#include <stdio.h>
/**
 *main - prints the size of various types on the computer
 *Return: returns 0
 */
int main(void)
{
	char sizechar;
	int sizeint;
	long int sizelong;
	long long int sizelonglong;
	float sizefloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(sizechar));
	printf("Size of an int: %zu byte(s)\n", sizeof(sizeint));
	printf("Size of a long int: %zu byte(s)\n", sizeof(sizelong));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(sizelonglong));
	printf("Size of float: %zu byte(s)\n", sizeof(sizefloat));
	return (0);
}
