/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:03:53 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/11/26 17:19:48 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
 char *str;

 str = (char *) s;
 while (n > 0)
 {
  *str = 0;
  str++;
  n--;
 }
}

// int main(void)
// {
//  char buffer1[10] = "asdfghjkl";
//  printf("buffer1 before func %s\n", buffer1);
//  ft_bzero(buffer1 + 2, 3);
//  buffer1[9] = '\0';  
// // hafta nullterm manually cuz i cant be arsed to fix it and 
      
// // it breaks otherwise and idk why
//  printf("After ft_bzero (buffer1): ");
//  for (int i = 0; i < 10; i++)
//  {
//   if (buffer1[i] == 0)
//    printf("-");
//   else
//    printf("%c", buffer1[i]);
//  }
//  return 0;
// }