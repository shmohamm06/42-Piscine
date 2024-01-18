/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:40:07 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/23 18:04:36 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				j = (argv[1][i] - 'a') + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				j = (argv[1][i] - 'A') + 1;
			else
				write(1, &argv[1][i], 1);
			while (j)
			{
				write(1, &argv[1][i], 1);
				j--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
