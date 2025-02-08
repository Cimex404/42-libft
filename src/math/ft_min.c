

#include "libft.h"

//	These two function are returning the lowest value of either two of an array of integers

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	ft_arrmin(int *arr, int size)
{
	int	i = 0;
	int	lowest = INT_MAX;

	while (i < size)
	{
		if (arr[i] < lowest)
			lowest = arr[i];
		i ++;
	}
	return (lowest);
}