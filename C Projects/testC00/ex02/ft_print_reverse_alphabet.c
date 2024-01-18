/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:13:07 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/04 09:27:56 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	count;

	count = 122;
	while (count >= 97)
	{
		write(1, &count, 1);
		count--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }