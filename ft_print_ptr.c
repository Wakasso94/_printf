#include "main.h"
/**
*ft_ptr_len - Returns the length of a pointer
*PARAMETERS
*@num: The pointer to be measured
*RETURN VALUES
*Return: The length of the pointer
*/
int	ft_ptr_len(uintptr_t num)
{
int	len;
len = 0;
while (num != 0)
{
len++;
num = num / 16;
}
return (len);
}
/**
*ft_put_ptr - Prints a pointer
*PARAMETERS
*@num: The length of the pointer
*RETURN VALUES
*/
void ft_put_ptr(uintptr_t num)
{
if (num >= 16)
{
ft_put_ptr(num / 16);
ft_put_ptr(num % 16);
}
else
{
if (num <= 9)
	_putchar((num + '0'), 1);
else
	_putchar((num - 10 + 'a'), 1);
}
}
/**
*ft_print_ptr - outputs a pointer
*PARAMETERS
*@ptr: The pointer to be printed
*RETURN VALUES
*Return: The length of the pointer
*/
int	ft_print_ptr(unsigned long long ptr)
{
int	print_length;

print_length = 0;
print_length += write(1, "0x", 2);
if (ptr == 0)
	print_length += write(1, "0", 1);
else
{
ft_put_ptr(ptr);
print_length += ft_ptr_len(ptr);
}
return (print_length);
}
