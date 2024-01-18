/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:15:59 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/09 15:41:06 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "sdfghj234567";
// 	ft_str_is_printable(a);
// 	printf("%d\n", ft_str_is_printable(a));
// }