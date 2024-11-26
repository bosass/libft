/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:10:58 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/11/26 16:11:27 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
// #include<stdio.h>
// #include <string.h>

// int main()
// {
//     char src[] = "wow";
//     char dest[] = "hehe lol xdd";
// 	char src2[] = "wow";
//     char dest2[] = "hehe lol xdd";
//     size_t size = 3;

//     ft_memcpy(dest, src, size);
// 	memcpy(dest2, src2, size);

//     printf("%s", dest);
// 	printf("|| %s", dest2);
// }