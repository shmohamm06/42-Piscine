/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:11:51 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/09 15:39:58 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "1p233";
// 	printf("%d\n", ft_str_is_numeric(a));
// }