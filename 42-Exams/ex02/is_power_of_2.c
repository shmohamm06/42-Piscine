/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:53:23 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/23 20:04:44 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n != 1)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", is_power_of_2(64));
// }
