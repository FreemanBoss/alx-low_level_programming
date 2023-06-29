#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @a: array of integers
 * @n: total number of array elements
 */

void reverse_array(int *a, int n)
{
	int first =0;
	int last;

	while (first < n--)
	{
		last = a[first];
		a[first] = a[n];
		a[n] = last;
		first++;
	}

}
