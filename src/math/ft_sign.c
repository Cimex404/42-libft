

#include "libft.h"

int	ft_sign(int val)
{
	if (val < 0)
		return (-1);
	else if (val > 0)
		return (1);
	return (0);
}