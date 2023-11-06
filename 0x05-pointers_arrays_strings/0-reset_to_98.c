#include "main.h"
#include <stddef.h>

/**
 * reset_to_98 - function that resets value of pointer to 98
 * @n: integer value
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	if (n != NULL)
	{
		*n = 98;
	}
}
