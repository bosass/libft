/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:17:29 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/11/26 16:17:51 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (c >= 0 && c <= 127)
		write(fd, &c, 1);
}
// int main()
// {
// 	int fd = open("test", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putchar_fd('a', fd);
// }