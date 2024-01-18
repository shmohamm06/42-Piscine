/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:51:06 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/21 11:03:13 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	while (power > 1)
	{
		nb = nb * i;
		power--;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(2, 3));
// }