/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:33:52 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/09 15:41:42 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "asdfghj";
// 	ft_str_is_uppercase(a);
// 	printf("%d\n", ft_str_is_uppercase(a));
// }