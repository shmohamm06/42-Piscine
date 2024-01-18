/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:30:20 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/21 10:18:12 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	e;
	int	f;

	f = argc - 1;
	while (f > 0)
	{
		e = 0;
		while (argv[f][e] != '\0')
		{
			write(1, &argv[f][e], 1);
			e++;
		}
		write(1, "\n", 1);
		f--;
	}
	return (0);
}
