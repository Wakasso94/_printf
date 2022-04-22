#include "main.h"
/**
*ft_isneg - checks if a number is negative
*PARAMETERS
*@n: the number to check
*@neg: pointer to the negative flag
*@tmp: temporary pointer to the number
*RETURN VALUES
*/
static void	ft_isneg(int *n, int *neg, int *tmp)
{
	if (*n == -2147483648)
	{
		*n = *n + 1;
		*neg = -1;
		*tmp = 1;
		*n = *n * -1;
	}
	else if (*n < 0)
	{
		*neg = -1;
		*n = *n * -1;
		*tmp = 0;
	}
	else if (*n >= 0)
	{
		*neg = 1;
		*tmp = 0;
	}
}
/**
*ft_itoa_len - measures the length of an integer
*PARAMETERS
*@n: the integer to measure
*RETURN VALUES
*Return: The string length
*/
static int ft_itoa_len(int n)
{
	int	len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}
/**
*ft_itoa_write - writes the string representation of n in the string s
*PARAMETERS
*@str: pointer to the string to be written
*@len: length of the string to be written
*@n: the integer to convert
*@tmp: temporary variable
*RETURN VALUES
*/
static void	ft_itoa_write(char *str, int len, int n, int tmp)
{
	while (n > 9)
	{
		str[len--] = (n % 10) + '0' + tmp;
		n = n / 10;
		tmp = 0;
	}
	str[len] = n + '0';
}

/**
*ft_itoa - Allocates (malloc) and returns a string representing the integer
*received as an argument. Negative numbers must be handled.
*PARAMETERS
*@n: the integer to convert.
*RETURN VALUES
*Return: The string representing the integer. NULL if the allocation fails.
*/
char *ft_itoa(int n)
{
int	neg;
int	tmp;
int	len;
char *str;

ft_isneg(&n, &neg, &tmp);
len = ft_itoa_len(n);
if (neg == -1)
{
str = malloc((len + 2) * sizeof(char));
if (!str)
	return (0);
len++;
str[0] = '-';
}
else
{
str = malloc((len + 1) * sizeof(char));
if (!str)
	return (0);
}
str[len--] = '\0';
ft_itoa_write(str, len, n, tmp);
return (str);
}
