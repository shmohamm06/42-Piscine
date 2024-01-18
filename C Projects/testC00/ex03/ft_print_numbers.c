/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:36:04 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/11 16:15:54 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	count;

	count = 48;
	while (count <= 57)
	{
		write(1, &count, 1);
		count++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}