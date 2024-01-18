/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shahriashadman06@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:41:34 by shmohamm          #+#    #+#             */
/*   Updated: 2023/05/14 14:30:24 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0' && b < size)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	c = 0;
	while (src[c] != '\0')
		c++;
	return (c + size);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char src1[10] = "aaaahhhh";
// 	char dest1[10] = "ouuuuffff";

// 	char src[10] = "aaaahhhh";
// 	char dest[10] = "ouuuuffff";

// 	unsigned int nb = 2;
// 	unsigned int nb2 = 2;
// 	printf("%ld \n", strlcat(dest1, src1, nb));
// 	printf("%u\n", ft_strlcat(dest, src, nb2));
// 	return (0);
// }