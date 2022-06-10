#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isupper(void)
{
	char c;
if (c=='A')
{
    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
}
	else {
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
	}
    return (0);
}
