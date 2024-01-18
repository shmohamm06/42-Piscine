/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 07:42:48 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/11 10:24:47 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;

// 	a = 11;
// 	b = 3;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a :  %d, b ; %d", a, b);

// 	return (0);
// }