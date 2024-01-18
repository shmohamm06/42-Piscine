/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:57:05 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/11 10:26:59 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int *ptra;
// 	int *ptrb;

// 	a = 1;
// 	b = 2;

// 	ptra = &a;
// 	ptrb = &b;

// 	ft_swap(ptra, ptrb);

// 	printf("a : %d, b : %d\n", a, b);
// 	return (0);
// }