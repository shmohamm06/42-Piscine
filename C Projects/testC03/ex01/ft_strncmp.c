/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 07:49:29 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/22 10:14:18 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("Gugugagagaga", "Gugugaga", 4));
	printf("%d\n", ft_strncmp("lalsla", "lalahahahahahah", 4));
	printf("%d\n", ft_strncmp("", "", 6));
}