#include "libft.h"

int ft_isalnum(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}
// #include<stdio.h>
// int main()
// {
//     char c = 'A';
//     int out = ft_isalnum(c);
//     printf("%d", out);
// }