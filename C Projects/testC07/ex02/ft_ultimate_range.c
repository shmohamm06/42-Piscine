/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:13:06 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/22 10:05:16 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*output;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	output = (int *)malloc(sizeof(int) * (i));
	if (output == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = output;
	i = 0;
	while (max > min)
	{
		output[i] = min;
		min++;
		i++;
	}
	return (i);
}
