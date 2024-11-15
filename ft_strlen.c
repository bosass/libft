#include "libft.h"

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}
// #include<stdio.h>
// int main()
// {
//     char text[] = "asf";
//     int out = ft_strlen(text);
//     printf("%d", out);
// }