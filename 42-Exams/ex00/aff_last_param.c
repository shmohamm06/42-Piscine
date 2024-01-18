/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 08:23:10 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/23 18:00:18 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		argc--;
		while (argv[argc][i])
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
