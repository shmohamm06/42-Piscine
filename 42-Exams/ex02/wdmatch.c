/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:49:43 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/25 07:16:45 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][i])
		{
			if (argv[1][j] == argv[2][i])
				j++;
			if (argv[1][j] == '\0')
			{
				j = 0;
				while (argv[1][j])
				{
					write(1, &argv[1][j], 1);
					j++;
				}
				break ;
			}
			i++;
		}
	}s
	write(1, "\n", 1);
}
