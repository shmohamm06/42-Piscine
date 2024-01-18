/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:33:52 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/09 15:39:50 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "afddddfgdfg";
// 	ft_str_is_lowercase(a);
// 	printf("%d\n", ft_str_is_lowercase(a));
// }