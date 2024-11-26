/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:28:22 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/11/26 22:12:38 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char s1[] = "test\200";
//     const char s2[] = "test\0";
//     int n = 6;
//     int out = ft_strncmp(s1, s2, n);
//     int out2 = strncmp(s1, s2, n);
//     printf("%d || ", out );
//     printf("%d", out2);
// }