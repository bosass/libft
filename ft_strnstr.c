/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:29:22 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/11/26 16:30:11 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (i + 1 < len && big[i] != '\0')
	{
		k = 0;
		while (big[i + k] == little[k])
		{
			if (little[k + 1] == '\0')
				return ((char *)big + i);
			k++;
		}
		i++;
	}
	return (0);
}

// #include<string.h>
// #include<stdio.h>
// int main()
// {
//     char big[] = "wow so big";
//     char smol[] = "so";
//     size_t size = 6;
//     char *out = ft_strnstr(big, smol, size);
//     printf("%s", out);
// }