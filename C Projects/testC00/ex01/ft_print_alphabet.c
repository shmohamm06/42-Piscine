/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 07:42:35 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/04 15:09:36 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	count;

	count = 97;
	while (count >= 97 && count <= 122)
	{
		write(1, &count, 1);
		count++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
