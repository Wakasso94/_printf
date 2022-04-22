#include "main.h"
/**
*ft_putstr - prints a string
*PARAMETERS
*@str: The pointer to the string to be printed
*RETURN VALUES
*/
void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/**
*ft_printstr - prints a string
*PARAMETERS
*@str: The pointer to the string to be printed
*RETURN VALUES
*Return: The length of the string
*/
int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
/**
*ft_printnbr - prints a number
*PARAMETERS
*@n: The number to be printed
*RETURN VALUES
*Return: The number of characters printed
*/
int	ft_printnbr(int n)
{
	int	len;
	char *num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}
/**
*ft_printpercent - prints the percent sign
*PARAMETERS
*RETURN VALUES
*Return: 1
*/
int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
