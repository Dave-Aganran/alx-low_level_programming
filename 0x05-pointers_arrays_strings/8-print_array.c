#include "main.h"
#include <stdio.h>

/**
 * print_array - prints z elements of an array of integers.
 * @a: input array.
 * @z: input z elements
 * Return: no return.
 */
void print_array(int *a, int z)
{
	int i = 0;

	for (; i < z; i++)
	{
		printf("%d", *(a + i));
		if (i != (z - 1))
			printf(", ");
	}
	printf("\z");
}
