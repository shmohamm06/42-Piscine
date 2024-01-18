/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:17:01 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/21 19:49:28 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*output;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	output = (int *)malloc(sizeof(int) * (i));
	if (output == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		output[i] = min;
		min++;
		i++;
	}
	return (output);
}
