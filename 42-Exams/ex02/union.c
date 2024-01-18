/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:12:27 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/24 15:29:00 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int tab[999] = {0};

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
            if (tab[(int)argv[1][i]] == 0)
			{
				tab[(int)argv[1][i]] = 1;
            	write(1, &argv[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (tab[(int)argv[2][i]] == 0)
			{
				tab[(int)argv[2][i]] = 1;
				write(1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
    return (0);
}