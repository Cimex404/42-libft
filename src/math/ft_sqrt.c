

#include "libft.h"

//	This function is returning the square root of a number

float	ft_sqrt(int nbr)
{
	float	i = 1;
	float	j = 0;

	if (nbr < 0)
		return (-1);
	if (nbr == 0)
		return (0);
	while (i != j)
	{
		j = i;
		i = (i + nbr / i) / 2;
	}
	return (i);
}