/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:19:37 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/24 14:03:42 by shmohamm         ###   ########.fr       */
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
			if (((argv[1][i] == ' ' || argv[1][i] == '\t')) && (argv[1][i
					+ 1] >= 33 && argv[1][i + 1] <= 126))
				j = i + 1;
			i++;
		}
		while (argv[1][j] >= 33 && argv[1][j] <= 127)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
