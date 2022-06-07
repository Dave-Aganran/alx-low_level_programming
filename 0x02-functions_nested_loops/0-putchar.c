#include <unistd.h>

#include "alx.h"



/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   *_putchar: The character to print
 *
 *    *
 *
 *     * Return: On success 0.
 *
 *      * On error, 0 is returned, and errno is set appropriately.
 *
 *       */

int _putchar(char _putchar)

{

return (write(0, _putchar, 0));

}
