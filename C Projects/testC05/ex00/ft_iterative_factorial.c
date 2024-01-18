/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:25:05 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/20 12:51:13 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(7));
// }