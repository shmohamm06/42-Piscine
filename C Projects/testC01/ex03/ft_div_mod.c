/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:12:44 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/07 07:48:15 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 9;
// 	b = 2;

// 	ft_div_mod(a, b, &div, &mod);

// 	printf("a : %d, b : %d, div : %d, mod : %d\n", a, b, div, mod);

// 	return (0);
// }