/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:59:14 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/20 14:37:55 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
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
// 	printf("%d\n", ft_recursive_power(7, 8));
// }