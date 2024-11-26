/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:08:02 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/11/26 16:08:21 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*num;

	len = ft_len(n);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n < 0)
		num[0] = '-';
	if (n == -2147483648)
	{
		num[1] = '2';
		n = 147483648;
	}
	if (n < 0)
		n = -n;
	while (n)
	{
		num[--len] = n % 10 + '0';
		n /= 10;
	}
	return (num);
}

// #include<stdio.h>
// int main()
// {
//     int h = -21;
//     int out = ft_len(h);
//     char *fun = ft_itoa(h);
//     printf("%d", out);
// }