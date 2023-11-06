#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that calculates length of a string
 * @s:pointer to the null terminated string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
