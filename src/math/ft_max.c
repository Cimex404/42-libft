

#include "libft.h"

//	These two function are returning the highest value of either two of an array of integers

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_arrmax(int *arr, int size)
{
	int	i = 0;
	int	highest = INT_MIN;

	while (i < size)
	{
		if (arr[i] > highest)
			highest = arr[i];
		i ++;
	}
	return (highest);
}