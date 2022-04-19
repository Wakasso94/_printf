/*
*	DESCRIPTION
*	Outputs the character ’c’ to the given file descriptor.
*	PARAMETERS
*	#1. The character to output.
*	#2. The file descriptor on which to write.
*	RETURN VALUES
*	-
*/

#include "main.h"

void	_putchar(char c, int fd)
{
	write(fd, &c, 1);
}
