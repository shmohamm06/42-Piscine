/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 10:01:44 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/22 10:17:23 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		src[j] = dest[i + j];
		j++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char b[] = "Hello";
	char a[] = "World!";
	ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}
