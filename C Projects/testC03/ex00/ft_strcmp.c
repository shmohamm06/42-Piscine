/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 07:21:54 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/22 10:18:14 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("Gugu", "Gugu"));
// 	printf("%d\n", ft_strcmp("blahblah", "blah"));
// 	printf("%d\n", ft_strcmp("pow", "power"));
// }
