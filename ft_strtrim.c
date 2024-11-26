/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:02:57 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/11/26 16:03:23 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;

	if ((s1 == NULL) && (set == NULL))
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	trim = malloc((end - start) + 2);
	if (NULL == trim)
		return (NULL);
	ft_strlcpy(trim, &s1[start], (end - start) + 2);
	return (trim);
}
// #include <stdio.h>
// int main()
// {
//     char const *s = "xxddll";
//     char const *set = "xdl";
//     char *out = ft_spizdil_strtrim(s, set);
//     printf("%s", out);
// }