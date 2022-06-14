#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by root to the
 * buffer pointed to by target.
 * @target: target.
 * @root: root.
 * Return: the pointer to target.
 */
char *_strcpy(char *target, char *root)
{
	int count = 0;

	while (count >= 0)
	{
		*(target + count) = *(root + count);
		if (*(root + count) == '\0')
			break;
		count++;
	}
	return (target);
}
