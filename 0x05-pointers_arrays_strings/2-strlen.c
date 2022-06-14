#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *c)
{
	int count = 0;

	while (*(c + count) != '\0')
		count++;
	return (count);
}
