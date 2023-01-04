#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: array of numbers
 * @n: length of the array
 * Returns: nothing
 */
void reverse_array(int *a, int n)
{
	int temp = 0, i = 0;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[(n - i - 1)];

		a[(n - i - 1)] =  temp;

		i++;
	}
}
