#include "main.h"
/**
*ft_printchar - prints a character
*PARAMETERS
*@c: The character to be printed
*RETURN VALUES
*Return: 1
*/
int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}
/**
*ft_formats - formats the string
*PARAMETERS
*@args: The arguments to be formatted
*@format: The format string
*Return: The length of the string
*/
int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'S')
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_printpercent();
	return (print_length);
}
/**
*_printf - prints a string
*PARAMETERS
*@format: The format string
*Also any input to be formatted
*RETURN VALUES
*Return: The length of the string
*/
int _printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		print_length;
	const char* str;

	i = 0;
	print_length = 0;
	va_start(args, format);
	str = format;

	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
