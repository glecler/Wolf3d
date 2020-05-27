#include "./includes/libft.h"

double ft_pow(double x, int pow)
{
    double buff;

    buff = x;
    if (pow == 0)
        return (1);
    while (pow > 1)
    {
        x *= buff;
        pow--;
    }
    return (x);
}

double  ft_fpart(char *str)
{
    double fpart;
    int i;

    fpart = 0;
    i = 1;
    str++;
    while ('0' <= *str && *str <= '9')
	{
		fpart += (*str - 48) / ft_pow(10, i);
		str++;
        i++;
	}
    return (fpart);
}

double		ft_atod(char *str)
{
	double x;
	double y;

	y = 1;
	x = 0;
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v'
			|| *str == '\f' || *str == ' ')
		str++;
	if (*str == '-')
	{
		y = y * -1;
		str++;
	}
	if (*str == '+' && *(str - 1) != '-')
		str++;
	while ('0' <= *str && *str < ':')
	{
		x = x * 10 + (*str - 48);
		str++;
	}
    if (*str == '.')
        x += ft_fpart(str);
	return (x * y);
}