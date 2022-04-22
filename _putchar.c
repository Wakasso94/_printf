#include "main.h"
/**
*_putchar - Outputs the character ’c’ to the given file descriptor.
*PARAMETERS
*@c: The character to output.
*@fd: The file descriptor on which to write.
*RETURN VALUES
*/
void _putchar(char c, int fd)
{
write(fd, &c, 1);
}
