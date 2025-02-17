

#include "libft.h"

// This function returns the input raised to the power of the exponent.

float	ft_pow(float base, unsigned int exp)
{
	unsigned int	i = 1;
	float			result = base;

	while (i < exp)
	{
		result *= base;
		i ++;
	}
	return (result);
}