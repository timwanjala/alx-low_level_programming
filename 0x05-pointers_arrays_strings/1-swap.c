#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a: Integer to be swapped from
 * @b: integer to be swapped to
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
