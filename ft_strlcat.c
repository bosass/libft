/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:24:53 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/11/26 20:05:13 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	out;

	i = 0;
	k = 0;
	out = 0;
	while (dst[i] != '\0')
		i++;
	while (src[k] != '\0' && i + k + 1 < size)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	out = i + k;
	return (out);
}

#include<stdio.h>
int main()
{
    char dst[] = "lorem ipsum dolor sit amet";
    char src[] = "haha";
    size_t size = 5;
    size_t out = ft_strlcat(dst, src, size);
    printf("dest is '%s', src is '%s', size is '%zu', out is '%zu'\n", dst, src, size, out);
}