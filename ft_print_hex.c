#include "main.h"
/**
*ft_hex_len - measures a hexadecimal number
*PARAMETERS
*@num: The number to be printed
*RETURN VALUES
*Return: The length of the number
*/
int	ft_hex_len(unsigned	int num)
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
*ft_put_hex - prints a hexadecimal number
*PARAMETERS
*@num: The number to be printed
*RETURN VALUES
*/
void ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			_putchar((num + '0'), 1);
		else
		{
			if (format == 'x')
				_putchar((num - 10 + 'a'), 1);
			if (format == 'X')
				_putchar((num - 10 + 'A'), 1);
		}
	}
}
/**
*ft_print_hex - prints a hexadecimal number
*PARAMETERS
*@num: The number to be printed
*@format: The format of the number to be printed
*RETURN VALUES
*Return: The length of the number
*/
int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
