/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:08:08 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/21 10:18:15 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	e;
	int	f;

	f = 1;
	while (f < argc)
	{
		e = 0;
		while (argv[f][e])
		{
			write(1, &argv[f][e], 1);
			e++;
		}
		write(1, "\n", 1);
		f++;
	}
}
