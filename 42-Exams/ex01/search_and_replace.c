/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:47:31 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/18 09:21:48 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	i = 0;

	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		while (argv[1][i])
		{
			if (argv[2][0] == argv[1][i])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}